/**************************************************************************************************
 *    Copyright：An individual mandate_ZHJJSSYF
 * Create Class：赵进军
 *  Create Data：2015/11/25 23:11:00
 *  Description：操作XML文件
 **************************************************************************************************/
#pragma once
#include "IOperationProfile.h"

class OperationProfile_XML :public IOperationProfile
{
public:
	OperationProfile_XML();																							// 构造函数
	virtual bool CreateProfile();																					// 创建XML配置文件
	virtual	bool DeleteProfiles();																					// 删除XML配置文件
	virtual bool UpdateProfile();																					// 更新XML配置文件
	virtual bool ReadProfile();																						// 读取XML配置文件
	virtual	~OperationProfile_XML();
};

