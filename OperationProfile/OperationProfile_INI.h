/**************************************************************************************************
 *    Copyright��An individual mandate_ZHJJSSYF
 * Create Class���Խ���
 *  Create Data��2015/11/25 23:57:00
 *  Description������INI�ļ�
 **************************************************************************************************/
#pragma once
#include "IOperationProfile.h"
class OperationProfile_INI :public IOperationProfile
{
public:
	OperationProfile_INI();
	virtual bool CreateProfile();																					// ����INI�����ļ�
	virtual	bool DeleteProfiles();																					// ɾ��INI�����ļ�
	virtual bool UpdateProfile();																					// ����INI�����ļ�
	virtual bool ReadProfile();																						// ��ȡINI�����ļ�
	virtual ~OperationProfile_INI();																				// ��������
};

