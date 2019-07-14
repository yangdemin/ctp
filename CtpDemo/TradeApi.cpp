#include "pch.h"
#include  "TradeApi.h"

///删除接口对象本身
///@remark 不再使用本接口对象时,调用该函数删除接口对象
void  MyTradeApi::Release()
{

};

///初始化
///@remark 初始化运行环境,只有调用后,接口才开始工作
void  MyTradeApi::Init()
{

};

///等待接口线程结束运行
///@return 线程退出代码
int  MyTradeApi::Join()
{
	return 0;
};

///获取当前交易日
///@retrun 获取到的交易日
///@remark 只有登录成功后,才能得到正确的交易日
const char * MyTradeApi::GetTradingDay()
{
	char arr[] = "test";
	return arr;
};

///注册前置机网络地址
///@param pszFrontAddress：前置机网络地址。
///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。 
///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
void MyTradeApi::RegisterFront(char *pszFrontAddress)
{

};

///注册名字服务器网络地址
///@param pszNsAddress：名字服务器网络地址。
///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。 
///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。
///@remark RegisterNameServer优先于RegisterFront
void  MyTradeApi::RegisterNameServer(char *pszNsAddress)
{

};

///注册名字服务器用户信息
///@param pFensUserInfo：用户信息。
void  MyTradeApi::RegisterFensUserInfo(CThostFtdcFensUserInfoField * pFensUserInfo)
{

};

///注册回调接口
///@param pSpi 派生自回调接口类的实例
void  MyTradeApi::RegisterSpi(CThostFtdcTraderSpi *pSpi)

{

};

///订阅私有流。
///@param nResumeType 私有流重传方式  
///        THOST_TERT_RESTART:从本交易日开始重传
///        THOST_TERT_RESUME:从上次收到的续传
///        THOST_TERT_QUICK:只传送登录后私有流的内容
///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
void  MyTradeApi::SubscribePrivateTopic(THOST_TE_RESUME_TYPE nResumeType)

{

};

///订阅公共流。
///@param nResumeType 公共流重传方式  
///        THOST_TERT_RESTART:从本交易日开始重传
///        THOST_TERT_RESUME:从上次收到的续传
///        THOST_TERT_QUICK:只传送登录后公共流的内容
///@remark 该方法要在Init方法前调用。若不调用则不会收到公共流的数据。
void  MyTradeApi::SubscribePublicTopic(THOST_TE_RESUME_TYPE nResumeType)
{

};

///客户端认证请求
int  MyTradeApi::ReqAuthenticate(CThostFtdcReqAuthenticateField *pReqAuthenticateField, int nRequestID)
{
	return 0;
};

///注册用户终端信息，用于中继服务器多连接模式
///需要在终端认证成功后，用户登录前调用该接口
int  MyTradeApi::RegisterUserSystemInfo(CThostFtdcUserSystemInfoField *pUserSystemInfo)
{
	return 0;
};

///上报用户终端信息，用于中继服务器操作员登录模式
///操作员登录后，可以多次调用该接口上报客户信息
int  MyTradeApi::SubmitUserSystemInfo(CThostFtdcUserSystemInfoField *pUserSystemInfo)
{
	return 0;
};

///用户登录请求
int MyTradeApi::ReqUserLogin(CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID)
{
	return 0;
};

///登出请求
int MyTradeApi::ReqUserLogout(CThostFtdcUserLogoutField *pUserLogout, int nRequestID)
{
	return 0;
};

///用户口令更新请求
int MyTradeApi::ReqUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, int nRequestID)
{
	return 0;
};

///资金账户口令更新请求
int MyTradeApi::ReqTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, int nRequestID)
{
	return 0;
};

///查询用户当前支持的认证模式
int MyTradeApi::ReqUserAuthMethod(CThostFtdcReqUserAuthMethodField *pReqUserAuthMethod, int nRequestID)
{
	return 0;
};

///用户发出获取图形验证码请求
int MyTradeApi::ReqGenUserCaptcha(CThostFtdcReqGenUserCaptchaField *pReqGenUserCaptcha, int nRequestID)
{
	return 0;
};

///用户发出获取短信验证码请求
int MyTradeApi::ReqGenUserText(CThostFtdcReqGenUserTextField *pReqGenUserText, int nRequestID)
{
	return 0;
};

///用户发出带有图片验证码的登陆请求
int MyTradeApi::ReqUserLoginWithCaptcha(CThostFtdcReqUserLoginWithCaptchaField *pReqUserLoginWithCaptcha, int nRequestID)
{
	return 0;
};

///用户发出带有短信验证码的登陆请求
int MyTradeApi::ReqUserLoginWithText(CThostFtdcReqUserLoginWithTextField *pReqUserLoginWithText, int nRequestID)
{
	return 0;
};

///用户发出带有动态口令的登陆请求
int MyTradeApi::ReqUserLoginWithOTP(CThostFtdcReqUserLoginWithOTPField *pReqUserLoginWithOTP, int nRequestID)
{
	return 0;
};

///报单录入请求
int MyTradeApi::ReqOrderInsert(CThostFtdcInputOrderField *pInputOrder, int nRequestID)
{
	return 0;
};

///预埋单录入请求
int MyTradeApi::ReqParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, int nRequestID)
{
	return 0;
};

///预埋撤单录入请求
int MyTradeApi::ReqParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, int nRequestID)
{
	return 0;
};

///报单操作请求
int MyTradeApi::ReqOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, int nRequestID)
{
	return 0;
};

///查询最大报单数量请求
int MyTradeApi::ReqQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, int nRequestID)
{
	return 0;
};

///投资者结算结果确认
int MyTradeApi::ReqSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, int nRequestID)
{
	return 0;
};

///请求删除预埋单
int MyTradeApi::ReqRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, int nRequestID)
{
	return 0;
};

///请求删除预埋撤单
int MyTradeApi::ReqRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, int nRequestID)
{
	return 0;
};

///执行宣告录入请求
int MyTradeApi::ReqExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, int nRequestID)
{
	return 0;
};

///执行宣告操作请求
int MyTradeApi::ReqExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, int nRequestID)
{
	return 0;
};

///询价录入请求
int MyTradeApi::ReqForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, int nRequestID)
{
	return 0;
};

///报价录入请求
int MyTradeApi::ReqQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, int nRequestID)
{
	return 0;
};

///报价操作请求
int MyTradeApi::ReqQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, int nRequestID)
{
	return 0;
};

///批量报单操作请求
int MyTradeApi::ReqBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, int nRequestID)
{
	return 0;
};

///期权自对冲录入请求
int MyTradeApi::ReqOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, int nRequestID)
{
	return 0;
};

///期权自对冲操作请求
int MyTradeApi::ReqOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, int nRequestID)
{
	return 0;
};

///申请组合录入请求
int MyTradeApi::ReqCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, int nRequestID)
{
	return 0;
};

///请求查询报单
int MyTradeApi::ReqQryOrder(CThostFtdcQryOrderField *pQryOrder, int nRequestID)
{
	return 0;
};

///请求查询成交
int MyTradeApi::ReqQryTrade(CThostFtdcQryTradeField *pQryTrade, int nRequestID)
{
	return 0;
};

///请求查询投资者持仓
int MyTradeApi::ReqQryInvestorPosition(CThostFtdcQryInvestorPositionField *pQryInvestorPosition, int nRequestID)
{
	return 0;
};

///请求查询资金账户
int MyTradeApi::ReqQryTradingAccount(CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID)
{
	return 0;
}
///请求查询投资者
int MyTradeApi::ReqQryInvestor(CThostFtdcQryInvestorField *pQryInvestor, int nRequestID)
{
	return 0;
};

///请求查询交易编码
int MyTradeApi::ReqQryTradingCode(CThostFtdcQryTradingCodeField *pQryTradingCode, int nRequestID)
{
	return 0;
};

///请求查询合约保证金率
int MyTradeApi::ReqQryInstrumentMarginRate(CThostFtdcQryInstrumentMarginRateField *pQryInstrumentMarginRate, int nRequestID)
{
	return 0;
};

///请求查询合约手续费率
int MyTradeApi::ReqQryInstrumentCommissionRate(CThostFtdcQryInstrumentCommissionRateField *pQryInstrumentCommissionRate, int nRequestID)
{
	return 0;
};

///请求查询交易所
int MyTradeApi::ReqQryExchange(CThostFtdcQryExchangeField *pQryExchange, int nRequestID)
{
	return 0;
};

///请求查询产品
int MyTradeApi::ReqQryProduct(CThostFtdcQryProductField *pQryProduct, int nRequestID)
{
	return 0;
};

///请求查询合约
int MyTradeApi::ReqQryInstrument(CThostFtdcQryInstrumentField *pQryInstrument, int nRequestID)
{
	return 0;
};

///请求查询行情
int MyTradeApi::ReqQryDepthMarketData(CThostFtdcQryDepthMarketDataField *pQryDepthMarketData, int nRequestID)
{
	return 0;
};

///请求查询投资者结算结果
int MyTradeApi::ReqQrySettlementInfo(CThostFtdcQrySettlementInfoField *pQrySettlementInfo, int nRequestID)
{
	return 0;
};

///请求查询转帐银行
int MyTradeApi::ReqQryTransferBank(CThostFtdcQryTransferBankField *pQryTransferBank, int nRequestID)
{
	return 0;
};

///请求查询投资者持仓明细
int MyTradeApi::ReqQryInvestorPositionDetail(CThostFtdcQryInvestorPositionDetailField *pQryInvestorPositionDetail, int nRequestID)
{
	return 0;
};

///请求查询客户通知
int MyTradeApi::ReqQryNotice(CThostFtdcQryNoticeField *pQryNotice, int nRequestID)
{
	return 0;
};

///请求查询结算信息确认
int MyTradeApi::ReqQrySettlementInfoConfirm(CThostFtdcQrySettlementInfoConfirmField *pQrySettlementInfoConfirm, int nRequestID)
{
	return 0;
};

///请求查询投资者持仓明细
int MyTradeApi::ReqQryInvestorPositionCombineDetail(CThostFtdcQryInvestorPositionCombineDetailField *pQryInvestorPositionCombineDetail, int nRequestID)
{
	return 0;
};

///请求查询保证金监管系统经纪公司资金账户密钥
int MyTradeApi::ReqQryCFMMCTradingAccountKey(CThostFtdcQryCFMMCTradingAccountKeyField *pQryCFMMCTradingAccountKey, int nRequestID)
{
	return 0;
};

///请求查询仓单折抵信息
int MyTradeApi::ReqQryEWarrantOffset(CThostFtdcQryEWarrantOffsetField *pQryEWarrantOffset, int nRequestID)
{
	return 0;
};

///请求查询投资者品种/跨品种保证金
int MyTradeApi::ReqQryInvestorProductGroupMargin(CThostFtdcQryInvestorProductGroupMarginField *pQryInvestorProductGroupMargin, int nRequestID)
{
	return 0;
};

///请求查询交易所保证金率
int MyTradeApi::ReqQryExchangeMarginRate(CThostFtdcQryExchangeMarginRateField *pQryExchangeMarginRate, int nRequestID)
{
	return 0;
};

///请求查询交易所调整保证金率
int MyTradeApi::ReqQryExchangeMarginRateAdjust(CThostFtdcQryExchangeMarginRateAdjustField *pQryExchangeMarginRateAdjust, int nRequestID)
{
	return 0;
};

///请求查询汇率
int MyTradeApi::ReqQryExchangeRate(CThostFtdcQryExchangeRateField *pQryExchangeRate, int nRequestID)
{
	return 0;
};

///请求查询二级代理操作员银期权限
int MyTradeApi::ReqQrySecAgentACIDMap(CThostFtdcQrySecAgentACIDMapField *pQrySecAgentACIDMap, int nRequestID)
{
	return 0;
};

///请求查询产品报价汇率
int MyTradeApi::ReqQryProductExchRate(CThostFtdcQryProductExchRateField *pQryProductExchRate, int nRequestID)
{
	return 0;
};

///请求查询产品组
int MyTradeApi::ReqQryProductGroup(CThostFtdcQryProductGroupField *pQryProductGroup, int nRequestID)
{
	return 0;
};

///请求查询做市商合约手续费率
int MyTradeApi::ReqQryMMInstrumentCommissionRate(CThostFtdcQryMMInstrumentCommissionRateField *pQryMMInstrumentCommissionRate, int nRequestID)
{
	return 0;
};

///请求查询做市商期权合约手续费
int MyTradeApi::ReqQryMMOptionInstrCommRate(CThostFtdcQryMMOptionInstrCommRateField *pQryMMOptionInstrCommRate, int nRequestID)
{
	return 0;
};

///请求查询报单手续费
int MyTradeApi::ReqQryInstrumentOrderCommRate(CThostFtdcQryInstrumentOrderCommRateField *pQryInstrumentOrderCommRate, int nRequestID)
{
	return 0;
};

///请求查询资金账户
int MyTradeApi::ReqQrySecAgentTradingAccount(CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID)
{
	return 0;
};

///请求查询二级代理商资金校验模式
int MyTradeApi::ReqQrySecAgentCheckMode(CThostFtdcQrySecAgentCheckModeField *pQrySecAgentCheckMode, int nRequestID)
{
	return 0;
};

///请求查询二级代理商信息
int MyTradeApi::ReqQrySecAgentTradeInfo(CThostFtdcQrySecAgentTradeInfoField *pQrySecAgentTradeInfo, int nRequestID)
{
	return 0;
};

///请求查询期权交易成本
int MyTradeApi::ReqQryOptionInstrTradeCost(CThostFtdcQryOptionInstrTradeCostField *pQryOptionInstrTradeCost, int nRequestID)
{
	return 0;
};

///请求查询期权合约手续费
int MyTradeApi::ReqQryOptionInstrCommRate(CThostFtdcQryOptionInstrCommRateField *pQryOptionInstrCommRate, int nRequestID)
{
	return 0;
};

///请求查询执行宣告
int MyTradeApi::ReqQryExecOrder(CThostFtdcQryExecOrderField *pQryExecOrder, int nRequestID)
{
	return 0;
};

///请求查询询价
int MyTradeApi::ReqQryForQuote(CThostFtdcQryForQuoteField *pQryForQuote, int nRequestID)
{
	return 0;
};

///请求查询报价
int MyTradeApi::ReqQryQuote(CThostFtdcQryQuoteField *pQryQuote, int nRequestID)
{
	return 0;
};

///请求查询期权自对冲
int MyTradeApi::ReqQryOptionSelfClose(CThostFtdcQryOptionSelfCloseField *pQryOptionSelfClose, int nRequestID)
{
	return 0;
};

///请求查询投资单元
int MyTradeApi::ReqQryInvestUnit(CThostFtdcQryInvestUnitField *pQryInvestUnit, int nRequestID)
{
	return 0;
};

///请求查询组合合约安全系数
int MyTradeApi::ReqQryCombInstrumentGuard(CThostFtdcQryCombInstrumentGuardField *pQryCombInstrumentGuard, int nRequestID)
{
	return 0;
};

///请求查询申请组合
int MyTradeApi::ReqQryCombAction(CThostFtdcQryCombActionField *pQryCombAction, int nRequestID)
{
	return 0;
};

///请求查询转帐流水
int MyTradeApi::ReqQryTransferSerial(CThostFtdcQryTransferSerialField *pQryTransferSerial, int nRequestID)
{
	return 0;
};

///请求查询银期签约关系
int  MyTradeApi::ReqQryAccountregister(CThostFtdcQryAccountregisterField *pQryAccountregister, int nRequestID)
{
	return 0;
};

///请求查询签约银行
int  MyTradeApi::ReqQryContractBank(CThostFtdcQryContractBankField *pQryContractBank, int nRequestID)
{
	return 0;
};

///请求查询预埋单
int  MyTradeApi::ReqQryParkedOrder(CThostFtdcQryParkedOrderField *pQryParkedOrder, int nRequestID)
{
	return 0;
};

///请求查询预埋撤单
int  MyTradeApi::ReqQryParkedOrderAction(CThostFtdcQryParkedOrderActionField *pQryParkedOrderAction, int nRequestID)
{
	return 0;
};

///请求查询交易通知
int  MyTradeApi::ReqQryTradingNotice(CThostFtdcQryTradingNoticeField *pQryTradingNotice, int nRequestID)
{
	return 0;
};

///请求查询经纪公司交易参数
int  MyTradeApi::ReqQryBrokerTradingParams(CThostFtdcQryBrokerTradingParamsField *pQryBrokerTradingParams, int nRequestID)
{
	return 0;
};

///请求查询经纪公司交易算法
int  MyTradeApi::ReqQryBrokerTradingAlgos(CThostFtdcQryBrokerTradingAlgosField *pQryBrokerTradingAlgos, int nRequestID)
{
	return 0;
};

///请求查询监控中心用户令牌
int  MyTradeApi::ReqQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, int nRequestID)
{
	return 0;
};

///期货发起银行资金转期货请求
int MyTradeApi::ReqFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, int nRequestID)
{
	return 0;
};

///期货发起期货资金转银行请求
int  MyTradeApi::ReqFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, int nRequestID)
{
	return 0;
};

///期货发起查询银行余额请求
int  MyTradeApi::ReqQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, int nRequestID)
{
	return 0;
};