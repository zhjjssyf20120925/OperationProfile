/**************************************************************************************************
 *    Copyright：An individual mandate_ZHJJSSYF
 * Create Class：赵进军
 *  Create Data：2015/11/25 23:57:00
 *  Description：操作INI文件
 **************************************************************************************************/
#pragma once
#include "IOperationProfile.h"
class OperationProfile_INI :public IOperationProfile
{
public:
	OperationProfile_INI();
	virtual bool CreateProfile();																					// 创建INI配置文件
	virtual	bool DeleteProfiles();																					// 删除INI配置文件
	virtual bool UpdateProfile();																					// 更新INI配置文件
	virtual bool ReadProfile();																						// 读取INI配置文件
	virtual ~OperationProfile_INI();																				// 析构函数
};

