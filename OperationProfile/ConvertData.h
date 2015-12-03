
/**************************************************************************************************
 *    Copyright：An individual mandate_ZHJJSSYF
 * Create Class：赵进军
 *  Create Data：2015/12/02 22:29:00
 *  Description：数据转换
 **************************************************************************************************/
#pragma once
#include "windows.h"
class ConvertData
{
public:
	ConvertData();
	~ConvertData();
	LPCWSTR	ConvertCharTo(char* sourceObj);																			// 把char*数据类型转换成LPCWSTR
};

