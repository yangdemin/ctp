#pragma once
#include <stdio.h>
#include <windows.h>
#include "pch.h"
#include <iostream>
#include <string>
#include "DataCollect.h"
#include "ThostFtdcMdApi.h"
#include "ThostFtdcTraderApi.h"
#include "ThostFtdcUserApiDataType.h"
#include "ThostFtdcUserApiStruct.h"


class cUser：CThostFtdcMdApi {
public:
	void init();

	CThostFtdcMdSpi * mMdSpi; //行情 Service Provider Interface
	CThostFtdcMdApi * mMdApi; //行情 Application Programming Interface

	CThostFtdcTraderSpi *mTradeSpi;
	CThostFtdcTraderApi *mTradeApi;

	int RequestID;
};
