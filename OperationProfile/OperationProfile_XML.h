/**************************************************************************************************
 *    Copyright��An individual mandate_ZHJJSSYF
 * Create Class���Խ���
 *  Create Data��2015/11/25 23:11:00
 *  Description������XML�ļ�
 **************************************************************************************************/
#pragma once

#include "IOperationProfile.h"
#include "tinyxml\tinystr.h"
#include "tinyxml\tinyxml.h"
#include "ConvertData.h"
#include <string>


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ�Ԫ�ؽṹ��
 * ע�����null
 * �޸����ڣ�2015/11/28 23:01:00
 ***********************************************************************************************************/
struct xmlEle_Attr_Value
{
	char* xmlAttrName;																								// ������
	char* xmlAttrValue;																								// ����ֵ
	char* xmlEleName;																								// Ԫ����
	char* xmlEleValue;																								// Ԫ��ֵ
};


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ�Ԫ�ؽṹ��
 * ע�����null
 * �޸����ڣ�2015/11/28 23:01:00
 ***********************************************************************************************************/
struct xmlNode
{
	struct xmlEle_Attr_Value xmlNodeGroup;
	struct xmlEle_Attr_Value xmlNodeEle[3];
};

/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ��ṹ������
 * ע�����null
 * �޸����ڣ�2015/11/28 19:47:00
 ***********************************************************************************************************/
struct xmlElementArray
{
	char* RootElement;
	struct xmlNode xmlNodes[10];
};



class OperationProfile_XML :public IOperationProfile
{
public:
	OperationProfile_XML();																							// ���캯��
	virtual bool CreateProfile();																					// ����XML�����ļ�
	virtual	bool DeleteProfile();																					// ɾ��XML�����ļ�
	virtual bool UpdateProfile();																					// ����XML�����ļ�
	virtual bool ReadProfile();																						// ��ȡXML�����ļ�
	virtual	~OperationProfile_XML();



	bool DeleteNodeByNameIndex(char* delNodeName, int nodeIndex);													// ɾ��XML�ļ���ָ��λ�õĽڵ�
	bool DeleteNodeByNameAll(char* delNodeName);																	// ɾ��XML�ļ������з��������Ľڵ�
	bool GetNodePointerByName(TiXmlElement* pRootEle, char* strNodeName, TiXmlElement* &node, int nodeIndex);		// ͨ���ڵ�����ȡXML�Ľڵ�ָ��
	bool GetNodePointerByNameAll(TiXmlElement* pRootEle, char*  strNodeName, TiXmlElement* retNode[]);				// ͨ���ڵ�����ȡXML�����з��������Ľڵ�ָ��


private:
	bool XMLExits();																								// �ж�XML�ļ��Ƿ����

protected:
	int groupNodeCount = 2;																							// ��ǰXML�����ڵ�ĸ���
	int elementCount = 3;																							// ÿһ���ڵ�����Ԫ�صĸ���
	int arrayIndex = 0;																								// ���ڱ���XML�ڵ��ʱ��ʹ�ã�ʹ��֮ǰ����Ϊ0

	xmlElementArray xmlEleArr;
	xmlNode xmlnode;
	xmlEle_Attr_Value xmlNodeVar;

};

