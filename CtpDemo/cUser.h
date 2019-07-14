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


class cUser��CThostFtdcMdApi {
public:
	void init();

	CThostFtdcMdSpi * mMdSpi; //���� Service Provider Interface
	CThostFtdcMdApi * mMdApi; //���� Application Programming Interface

	CThostFtdcTraderSpi *mTradeSpi;
	CThostFtdcTraderApi *mTradeApi;

	int RequestID;
};
