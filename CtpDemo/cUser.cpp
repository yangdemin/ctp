#include "cUser.h"
#include "pch.h"
#include <stdio.h>
#include <string>
#include <windows.h>
#include <iostream>
#include "DataCollect.h"
#include "ThostFtdcMdApi.h"
#include "ThostFtdcTraderApi.h"
#include "ThostFtdcUserApiDataType.h"
#include "ThostFtdcUserApiStruct.h"
using namespace std;
#if 0
class CUser：CThostFtdcMdApi {
public:
	void OnFrontConnected()
	{
		cout << "OnFrontConnected." << endl;
		static const char *version = m_pUserApi->GetApiVersion();
		cout << "------当前版本号 ：" << version << " ------" << endl;
		ReqAuthenticate();
	}

	int ReqAuthenticate()
	{
		CThostFtdcReqAuthenticateField field;
		memset(&field, 0, sizeof(field));
		strcpy(field.BrokerID, "8000");
		strcpy(field.UserID, "001888");
		strcpy(field.AppID, "client_zhangs_1.0.0.1");
		strcpy(field.AuthCode, "5A5P4V7AZ5LCFEAK");
		return m_pUserApi->ReqAuthenticate(&field, 5);
	}

	void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspAuthenticate\n");
		if (pRspInfo != NULL && pRspInfo->ErrorID == 0) {
			printf("认证成功,ErrorID=0x%04x, ErrMsg=%s\n\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
			ReqUserLogin();
		}
		else {
			cout << "认证失败，" << "ErrorID=" << pRspInfo->ErrorID << "  ,ErrMsg=" << pRspInfo->ErrorMsg << endl;
		}
	}

	int ReqUserLogin()
	{
		printf("====ReqUserLogin====,用户登录中...\n\n");
		CThostFtdcReqUserLoginField reqUserLogin;
		memset(&reqUserLogin, 0, sizeof(reqUserLogin));
		strcpy_s(reqUserLogin.BrokerID, "8000");
		strcpy(reqUserLogin.UserID, "001888");
		strcpy(reqUserLogin.Password, "1");
		return m_pUserApi->ReqUserLogin(&reqUserLogin, ++RequestID);

	}
public:
	void init() {};
	void OnFrontConnected();
	CThostFtdcMdSpi * mMdSpi; //行情 Service Provider Interface
	CThostFtdcMdApi * mMdApi; //行情 Application Programming Interface

	CThostFtdcTraderSpi *m_pUserSpi;
	CThostFtdcTraderApi *m_pUserApi;

	int RequestID;
};


#endif