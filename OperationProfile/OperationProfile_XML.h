/**************************************************************************************************
 *    Copyright��An individual mandate_ZHJJSSYF
 * Create Class���Խ���
 *  Create Data��2015/11/25 23:11:00
 *  Description������XML�ļ�
 **************************************************************************************************/
#pragma once
#include "IOperationProfile.h"

class OperationProfile_XML :public IOperationProfile
{
public:
	OperationProfile_XML();																							// ���캯��
	virtual bool CreateProfile();																					// ����XML�����ļ�
	virtual	bool DeleteProfiles();																					// ɾ��XML�����ļ�
	virtual bool UpdateProfile();																					// ����XML�����ļ�
	virtual bool ReadProfile();																						// ��ȡXML�����ļ�
	virtual	~OperationProfile_XML();
};

