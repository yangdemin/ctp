#include "pch.h"
#include  "TradeApi.h"

///ɾ���ӿڶ�����
///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
void  MyTradeApi::Release()
{

};

///��ʼ��
///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
void  MyTradeApi::Init()
{

};

///�ȴ��ӿ��߳̽�������
///@return �߳��˳�����
int  MyTradeApi::Join()
{
	return 0;
};

///��ȡ��ǰ������
///@retrun ��ȡ���Ľ�����
///@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����
const char * MyTradeApi::GetTradingDay()
{
	char arr[] = "test";
	return arr;
};

///ע��ǰ�û������ַ
///@param pszFrontAddress��ǰ�û������ַ��
///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
void MyTradeApi::RegisterFront(char *pszFrontAddress)
{

};

///ע�����ַ����������ַ
///@param pszNsAddress�����ַ����������ַ��
///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:12001���� 
///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����12001������������˿ںš�
///@remark RegisterNameServer������RegisterFront
void  MyTradeApi::RegisterNameServer(char *pszNsAddress)
{

};

///ע�����ַ������û���Ϣ
///@param pFensUserInfo���û���Ϣ��
void  MyTradeApi::RegisterFensUserInfo(CThostFtdcFensUserInfoField * pFensUserInfo)
{

};

///ע��ص��ӿ�
///@param pSpi �����Իص��ӿ����ʵ��
void  MyTradeApi::RegisterSpi(CThostFtdcTraderSpi *pSpi)

{

};

///����˽������
///@param nResumeType ˽�����ش���ʽ  
///        THOST_TERT_RESTART:�ӱ������տ�ʼ�ش�
///        THOST_TERT_RESUME:���ϴ��յ�������
///        THOST_TERT_QUICK:ֻ���͵�¼��˽����������
///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
void  MyTradeApi::SubscribePrivateTopic(THOST_TE_RESUME_TYPE nResumeType)

{

};

///���Ĺ�������
///@param nResumeType �������ش���ʽ  
///        THOST_TERT_RESTART:�ӱ������տ�ʼ�ش�
///        THOST_TERT_RESUME:���ϴ��յ�������
///        THOST_TERT_QUICK:ֻ���͵�¼�󹫹���������
///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ������������ݡ�
void  MyTradeApi::SubscribePublicTopic(THOST_TE_RESUME_TYPE nResumeType)
{

};

///�ͻ�����֤����
int  MyTradeApi::ReqAuthenticate(CThostFtdcReqAuthenticateField *pReqAuthenticateField, int nRequestID)
{
	return 0;
};

///ע���û��ն���Ϣ�������м̷�����������ģʽ
///��Ҫ���ն���֤�ɹ����û���¼ǰ���øýӿ�
int  MyTradeApi::RegisterUserSystemInfo(CThostFtdcUserSystemInfoField *pUserSystemInfo)
{
	return 0;
};

///�ϱ��û��ն���Ϣ�������м̷���������Ա��¼ģʽ
///����Ա��¼�󣬿��Զ�ε��øýӿ��ϱ��ͻ���Ϣ
int  MyTradeApi::SubmitUserSystemInfo(CThostFtdcUserSystemInfoField *pUserSystemInfo)
{
	return 0;
};

///�û���¼����
int MyTradeApi::ReqUserLogin(CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID)
{
	return 0;
};

///�ǳ�����
int MyTradeApi::ReqUserLogout(CThostFtdcUserLogoutField *pUserLogout, int nRequestID)
{
	return 0;
};

///�û������������
int MyTradeApi::ReqUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, int nRequestID)
{
	return 0;
};

///�ʽ��˻������������
int MyTradeApi::ReqTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, int nRequestID)
{
	return 0;
};

///��ѯ�û���ǰ֧�ֵ���֤ģʽ
int MyTradeApi::ReqUserAuthMethod(CThostFtdcReqUserAuthMethodField *pReqUserAuthMethod, int nRequestID)
{
	return 0;
};

///�û�������ȡͼ����֤������
int MyTradeApi::ReqGenUserCaptcha(CThostFtdcReqGenUserCaptchaField *pReqGenUserCaptcha, int nRequestID)
{
	return 0;
};

///�û�������ȡ������֤������
int MyTradeApi::ReqGenUserText(CThostFtdcReqGenUserTextField *pReqGenUserText, int nRequestID)
{
	return 0;
};

///�û���������ͼƬ��֤��ĵ�½����
int MyTradeApi::ReqUserLoginWithCaptcha(CThostFtdcReqUserLoginWithCaptchaField *pReqUserLoginWithCaptcha, int nRequestID)
{
	return 0;
};

///�û��������ж�����֤��ĵ�½����
int MyTradeApi::ReqUserLoginWithText(CThostFtdcReqUserLoginWithTextField *pReqUserLoginWithText, int nRequestID)
{
	return 0;
};

///�û��������ж�̬����ĵ�½����
int MyTradeApi::ReqUserLoginWithOTP(CThostFtdcReqUserLoginWithOTPField *pReqUserLoginWithOTP, int nRequestID)
{
	return 0;
};

///����¼������
int MyTradeApi::ReqOrderInsert(CThostFtdcInputOrderField *pInputOrder, int nRequestID)
{
	return 0;
};

///Ԥ��¼������
int MyTradeApi::ReqParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, int nRequestID)
{
	return 0;
};

///Ԥ�񳷵�¼������
int MyTradeApi::ReqParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, int nRequestID)
{
	return 0;
};

///������������
int MyTradeApi::ReqOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, int nRequestID)
{
	return 0;
};

///��ѯ��󱨵���������
int MyTradeApi::ReqQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, int nRequestID)
{
	return 0;
};

///Ͷ���߽�����ȷ��
int MyTradeApi::ReqSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, int nRequestID)
{
	return 0;
};

///����ɾ��Ԥ��
int MyTradeApi::ReqRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, int nRequestID)
{
	return 0;
};

///����ɾ��Ԥ�񳷵�
int MyTradeApi::ReqRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, int nRequestID)
{
	return 0;
};

///ִ������¼������
int MyTradeApi::ReqExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, int nRequestID)
{
	return 0;
};

///ִ�������������
int MyTradeApi::ReqExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, int nRequestID)
{
	return 0;
};

///ѯ��¼������
int MyTradeApi::ReqForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, int nRequestID)
{
	return 0;
};

///����¼������
int MyTradeApi::ReqQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, int nRequestID)
{
	return 0;
};

///���۲�������
int MyTradeApi::ReqQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, int nRequestID)
{
	return 0;
};

///����������������
int MyTradeApi::ReqBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, int nRequestID)
{
	return 0;
};

///��Ȩ�ԶԳ�¼������
int MyTradeApi::ReqOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, int nRequestID)
{
	return 0;
};

///��Ȩ�ԶԳ��������
int MyTradeApi::ReqOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, int nRequestID)
{
	return 0;
};

///�������¼������
int MyTradeApi::ReqCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, int nRequestID)
{
	return 0;
};

///�����ѯ����
int MyTradeApi::ReqQryOrder(CThostFtdcQryOrderField *pQryOrder, int nRequestID)
{
	return 0;
};

///�����ѯ�ɽ�
int MyTradeApi::ReqQryTrade(CThostFtdcQryTradeField *pQryTrade, int nRequestID)
{
	return 0;
};

///�����ѯͶ���ֲ߳�
int MyTradeApi::ReqQryInvestorPosition(CThostFtdcQryInvestorPositionField *pQryInvestorPosition, int nRequestID)
{
	return 0;
};

///�����ѯ�ʽ��˻�
int MyTradeApi::ReqQryTradingAccount(CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID)
{
	return 0;
}
///�����ѯͶ����
int MyTradeApi::ReqQryInvestor(CThostFtdcQryInvestorField *pQryInvestor, int nRequestID)
{
	return 0;
};

///�����ѯ���ױ���
int MyTradeApi::ReqQryTradingCode(CThostFtdcQryTradingCodeField *pQryTradingCode, int nRequestID)
{
	return 0;
};

///�����ѯ��Լ��֤����
int MyTradeApi::ReqQryInstrumentMarginRate(CThostFtdcQryInstrumentMarginRateField *pQryInstrumentMarginRate, int nRequestID)
{
	return 0;
};

///�����ѯ��Լ��������
int MyTradeApi::ReqQryInstrumentCommissionRate(CThostFtdcQryInstrumentCommissionRateField *pQryInstrumentCommissionRate, int nRequestID)
{
	return 0;
};

///�����ѯ������
int MyTradeApi::ReqQryExchange(CThostFtdcQryExchangeField *pQryExchange, int nRequestID)
{
	return 0;
};

///�����ѯ��Ʒ
int MyTradeApi::ReqQryProduct(CThostFtdcQryProductField *pQryProduct, int nRequestID)
{
	return 0;
};

///�����ѯ��Լ
int MyTradeApi::ReqQryInstrument(CThostFtdcQryInstrumentField *pQryInstrument, int nRequestID)
{
	return 0;
};

///�����ѯ����
int MyTradeApi::ReqQryDepthMarketData(CThostFtdcQryDepthMarketDataField *pQryDepthMarketData, int nRequestID)
{
	return 0;
};

///�����ѯͶ���߽�����
int MyTradeApi::ReqQrySettlementInfo(CThostFtdcQrySettlementInfoField *pQrySettlementInfo, int nRequestID)
{
	return 0;
};

///�����ѯת������
int MyTradeApi::ReqQryTransferBank(CThostFtdcQryTransferBankField *pQryTransferBank, int nRequestID)
{
	return 0;
};

///�����ѯͶ���ֲ߳���ϸ
int MyTradeApi::ReqQryInvestorPositionDetail(CThostFtdcQryInvestorPositionDetailField *pQryInvestorPositionDetail, int nRequestID)
{
	return 0;
};

///�����ѯ�ͻ�֪ͨ
int MyTradeApi::ReqQryNotice(CThostFtdcQryNoticeField *pQryNotice, int nRequestID)
{
	return 0;
};

///�����ѯ������Ϣȷ��
int MyTradeApi::ReqQrySettlementInfoConfirm(CThostFtdcQrySettlementInfoConfirmField *pQrySettlementInfoConfirm, int nRequestID)
{
	return 0;
};

///�����ѯͶ���ֲ߳���ϸ
int MyTradeApi::ReqQryInvestorPositionCombineDetail(CThostFtdcQryInvestorPositionCombineDetailField *pQryInvestorPositionCombineDetail, int nRequestID)
{
	return 0;
};

///�����ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ
int MyTradeApi::ReqQryCFMMCTradingAccountKey(CThostFtdcQryCFMMCTradingAccountKeyField *pQryCFMMCTradingAccountKey, int nRequestID)
{
	return 0;
};

///�����ѯ�ֵ��۵���Ϣ
int MyTradeApi::ReqQryEWarrantOffset(CThostFtdcQryEWarrantOffsetField *pQryEWarrantOffset, int nRequestID)
{
	return 0;
};

///�����ѯͶ����Ʒ��/��Ʒ�ֱ�֤��
int MyTradeApi::ReqQryInvestorProductGroupMargin(CThostFtdcQryInvestorProductGroupMarginField *pQryInvestorProductGroupMargin, int nRequestID)
{
	return 0;
};

///�����ѯ��������֤����
int MyTradeApi::ReqQryExchangeMarginRate(CThostFtdcQryExchangeMarginRateField *pQryExchangeMarginRate, int nRequestID)
{
	return 0;
};

///�����ѯ������������֤����
int MyTradeApi::ReqQryExchangeMarginRateAdjust(CThostFtdcQryExchangeMarginRateAdjustField *pQryExchangeMarginRateAdjust, int nRequestID)
{
	return 0;
};

///�����ѯ����
int MyTradeApi::ReqQryExchangeRate(CThostFtdcQryExchangeRateField *pQryExchangeRate, int nRequestID)
{
	return 0;
};

///�����ѯ�����������Ա����Ȩ��
int MyTradeApi::ReqQrySecAgentACIDMap(CThostFtdcQrySecAgentACIDMapField *pQrySecAgentACIDMap, int nRequestID)
{
	return 0;
};

///�����ѯ��Ʒ���ۻ���
int MyTradeApi::ReqQryProductExchRate(CThostFtdcQryProductExchRateField *pQryProductExchRate, int nRequestID)
{
	return 0;
};

///�����ѯ��Ʒ��
int MyTradeApi::ReqQryProductGroup(CThostFtdcQryProductGroupField *pQryProductGroup, int nRequestID)
{
	return 0;
};

///�����ѯ�����̺�Լ��������
int MyTradeApi::ReqQryMMInstrumentCommissionRate(CThostFtdcQryMMInstrumentCommissionRateField *pQryMMInstrumentCommissionRate, int nRequestID)
{
	return 0;
};

///�����ѯ��������Ȩ��Լ������
int MyTradeApi::ReqQryMMOptionInstrCommRate(CThostFtdcQryMMOptionInstrCommRateField *pQryMMOptionInstrCommRate, int nRequestID)
{
	return 0;
};

///�����ѯ����������
int MyTradeApi::ReqQryInstrumentOrderCommRate(CThostFtdcQryInstrumentOrderCommRateField *pQryInstrumentOrderCommRate, int nRequestID)
{
	return 0;
};

///�����ѯ�ʽ��˻�
int MyTradeApi::ReqQrySecAgentTradingAccount(CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID)
{
	return 0;
};

///�����ѯ�����������ʽ�У��ģʽ
int MyTradeApi::ReqQrySecAgentCheckMode(CThostFtdcQrySecAgentCheckModeField *pQrySecAgentCheckMode, int nRequestID)
{
	return 0;
};

///�����ѯ������������Ϣ
int MyTradeApi::ReqQrySecAgentTradeInfo(CThostFtdcQrySecAgentTradeInfoField *pQrySecAgentTradeInfo, int nRequestID)
{
	return 0;
};

///�����ѯ��Ȩ���׳ɱ�
int MyTradeApi::ReqQryOptionInstrTradeCost(CThostFtdcQryOptionInstrTradeCostField *pQryOptionInstrTradeCost, int nRequestID)
{
	return 0;
};

///�����ѯ��Ȩ��Լ������
int MyTradeApi::ReqQryOptionInstrCommRate(CThostFtdcQryOptionInstrCommRateField *pQryOptionInstrCommRate, int nRequestID)
{
	return 0;
};

///�����ѯִ������
int MyTradeApi::ReqQryExecOrder(CThostFtdcQryExecOrderField *pQryExecOrder, int nRequestID)
{
	return 0;
};

///�����ѯѯ��
int MyTradeApi::ReqQryForQuote(CThostFtdcQryForQuoteField *pQryForQuote, int nRequestID)
{
	return 0;
};

///�����ѯ����
int MyTradeApi::ReqQryQuote(CThostFtdcQryQuoteField *pQryQuote, int nRequestID)
{
	return 0;
};

///�����ѯ��Ȩ�ԶԳ�
int MyTradeApi::ReqQryOptionSelfClose(CThostFtdcQryOptionSelfCloseField *pQryOptionSelfClose, int nRequestID)
{
	return 0;
};

///�����ѯͶ�ʵ�Ԫ
int MyTradeApi::ReqQryInvestUnit(CThostFtdcQryInvestUnitField *pQryInvestUnit, int nRequestID)
{
	return 0;
};

///�����ѯ��Ϻ�Լ��ȫϵ��
int MyTradeApi::ReqQryCombInstrumentGuard(CThostFtdcQryCombInstrumentGuardField *pQryCombInstrumentGuard, int nRequestID)
{
	return 0;
};

///�����ѯ�������
int MyTradeApi::ReqQryCombAction(CThostFtdcQryCombActionField *pQryCombAction, int nRequestID)
{
	return 0;
};

///�����ѯת����ˮ
int MyTradeApi::ReqQryTransferSerial(CThostFtdcQryTransferSerialField *pQryTransferSerial, int nRequestID)
{
	return 0;
};

///�����ѯ����ǩԼ��ϵ
int  MyTradeApi::ReqQryAccountregister(CThostFtdcQryAccountregisterField *pQryAccountregister, int nRequestID)
{
	return 0;
};

///�����ѯǩԼ����
int  MyTradeApi::ReqQryContractBank(CThostFtdcQryContractBankField *pQryContractBank, int nRequestID)
{
	return 0;
};

///�����ѯԤ��
int  MyTradeApi::ReqQryParkedOrder(CThostFtdcQryParkedOrderField *pQryParkedOrder, int nRequestID)
{
	return 0;
};

///�����ѯԤ�񳷵�
int  MyTradeApi::ReqQryParkedOrderAction(CThostFtdcQryParkedOrderActionField *pQryParkedOrderAction, int nRequestID)
{
	return 0;
};

///�����ѯ����֪ͨ
int  MyTradeApi::ReqQryTradingNotice(CThostFtdcQryTradingNoticeField *pQryTradingNotice, int nRequestID)
{
	return 0;
};

///�����ѯ���͹�˾���ײ���
int  MyTradeApi::ReqQryBrokerTradingParams(CThostFtdcQryBrokerTradingParamsField *pQryBrokerTradingParams, int nRequestID)
{
	return 0;
};

///�����ѯ���͹�˾�����㷨
int  MyTradeApi::ReqQryBrokerTradingAlgos(CThostFtdcQryBrokerTradingAlgosField *pQryBrokerTradingAlgos, int nRequestID)
{
	return 0;
};

///�����ѯ��������û�����
int  MyTradeApi::ReqQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, int nRequestID)
{
	return 0;
};

///�ڻ����������ʽ�ת�ڻ�����
int MyTradeApi::ReqFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, int nRequestID)
{
	return 0;
};

///�ڻ������ڻ��ʽ�ת��������
int  MyTradeApi::ReqFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, int nRequestID)
{
	return 0;
};

///�ڻ������ѯ�����������
int  MyTradeApi::ReqQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, int nRequestID)
{
	return 0;
};