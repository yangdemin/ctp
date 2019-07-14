#include <stdio.h>
#include <windows.h>
#include "pch.h"
#include <iostream>
#include <string>
#include "DataCollect.h"
// #include "ThostFtdcMdApi.h"
#include "ThostFtdcTraderApi.h"
#include "ThostFtdcUserApiDataType.h"
#include "ThostFtdcUserApiStruct.h"
#include <time.h> 


using namespace std;

class MyTradeSpi : public CThostFtdcTraderSpi
{
public:

	MyTradeSpi(CThostFtdcTraderApi *pApi) : m_pUserApi(pApi) {};

	///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
	virtual void OnFrontConnected()
	{
		cout << "OnFrontConnected." << endl;
		static const char *version = m_pUserApi->GetApiVersion();
		cout << "------当前版本号 ：" << version << " ------" << endl;
		this->ReqAuthenticate();
	}

	virtual int ReqAuthenticate()
	{
		cout << "ReqAuthenticate." << endl;
		CThostFtdcReqAuthenticateField field;
		memset(&field, 0, sizeof(field));
		
		strcpy_s(field.BrokerID,"8000");
		strcpy_s(field.UserID,"001888");
		strcpy_s(field.AppID,"client_zhangs_1.0.0.1");
		strcpy_s(field.AuthCode,"5A5P4V7AZ5LCFEAK");
		return m_pUserApi->ReqAuthenticate(&field, 5);
	}

	///客户端认证响应
	virtual void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspAuthenticate\n");
		if (pRspInfo != NULL && pRspInfo->ErrorID == 0) {
			printf("认证成功,ErrorID=0x%04x, ErrMsg=%s\n\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
			ReqUserLogin();
		}else {
			cout << "认证失败，" << "ErrorID=" << pRspInfo->ErrorID << "  ,ErrMsg=" << pRspInfo->ErrorMsg << endl;
		}
	}

	virtual int ReqUserLogin()
	{
		printf("====ReqUserLogin====,用户登录中...\n\n");
		CThostFtdcReqUserLoginField reqUserLogin;
		memset(&reqUserLogin, 0, sizeof(reqUserLogin));
		strcpy_s(reqUserLogin.BrokerID, "8000");
		strcpy_s(reqUserLogin.UserID, "001888");
		strcpy_s(reqUserLogin.Password, "1");
		return m_pUserApi->ReqUserLogin(&reqUserLogin, ++RequestID);
	}

	///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
	///@param nReason 错误原因
	///        0x1001 网络读失败
	///        0x1002 网络写失败
	///        0x2001 接收心跳超时
	///        0x2002 发送心跳失败
	///        0x2003 收到错误报文
	virtual void OnFrontDisconnected(int nReason) 
	{
		printf("OnFrontDisconnected nReason %d\r\n", nReason);
	};

	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	///@param nTimeLapse 距离上次接收报文的时间
	virtual void OnHeartBeatWarning(int nTimeLapse) 
	{
		printf("%s nTimeLapse %d\r\n",__FUNCDNAME__, nTimeLapse);
	};


	///登录请求响应
	virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("%s \r\n", __FUNCDNAME__);

	};

	///登出请求响应
	virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("%s \r\n", __FUNCDNAME__);
	};

public:
	// CThostFtdcMdSpi * mMdSpi; //行情 Service Provider Interface
	// CThostFtdcMdApi * mMdApi; //行情 Application Programming Interface

	CThostFtdcTraderApi *m_pUserApi;

	int RequestID;
};

void delay(int seconds)
{
	clock_t start = clock();
	clock_t lay = (clock_t)seconds * CLOCKS_PER_SEC;
	while ((clock() - start) < lay)
		;
}

int main()
{
	char  TradeFrontAddr[] = "tcp://124.74.247.142:10051";
	char  QuoteFrontAddr[] = "tcp://124.74.247.142:10061";

	CThostFtdcTraderApi *pTraderApi = CThostFtdcTraderApi::CreateFtdcTraderApi("");
	if (pTraderApi == nullptr)
	{
		cout << "CreateFtdcTraderApi error" << endl;
	}
	MyTradeSpi *pTraderSpi = new MyTradeSpi(pTraderApi);
	pTraderApi->RegisterSpi(pTraderSpi);

	// pTraderApi->SubscribePublicTopic(THOST_TERT_RESTART);
	pTraderApi->SubscribePublicTopic(THOST_TERT_RESUME);

	// pTraderApi->SubscribePrivateTopic(THOST_TERT_RESTART);
	pTraderApi->SubscribePrivateTopic(THOST_TERT_RESUME);


	try {
		pTraderApi->RegisterFront(TradeFrontAddr);
	}
	catch (...) {
		cout << " in exception:" << endl;
	}

	//delay(50);

	pTraderApi->Init();

	pTraderApi->Join();

	return 0;
}
