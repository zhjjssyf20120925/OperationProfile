#pragma once
#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include "OperationProfile_XML.h"

using namespace std;

/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ����캯��
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/25 23:46:00
 ***********************************************************************************************************/
OperationProfile_XML::OperationProfile_XML()
{
#pragma region [   XML�ļ��ṹ��Ԫ������װ   ]
	xmlEleArr.RootElement = "Persons";

	xmlNodeVar.xmlAttrName = "ID";
	xmlNodeVar.xmlAttrValue = "1";
	xmlNodeVar.xmlEleName = "Person";
	xmlNodeVar.xmlEleValue = NULL;
	xmlnode.xmlNodeGroup = xmlNodeVar;


	xmlNodeVar.xmlAttrName = NULL;
	xmlNodeVar.xmlAttrValue = NULL;
	xmlNodeVar.xmlEleName = "name";
	xmlNodeVar.xmlEleValue = "������";
	xmlnode.xmlNodeEle[0] = xmlNodeVar;


	xmlNodeVar.xmlAttrName = NULL;
	xmlNodeVar.xmlAttrValue = NULL;
	xmlNodeVar.xmlEleName = "age";
	xmlNodeVar.xmlEleValue = "56";
	xmlnode.xmlNodeEle[1] = xmlNodeVar;


	xmlNodeVar.xmlAttrName = NULL;
	xmlNodeVar.xmlAttrValue = NULL;
	xmlNodeVar.xmlEleName = "sex";
	xmlNodeVar.xmlEleValue = "��";
	xmlnode.xmlNodeEle[2] = xmlNodeVar;
	xmlEleArr.xmlNodes[0] = xmlnode;



	xmlNodeVar.xmlAttrName = "ID2";
	xmlNodeVar.xmlAttrValue = "12";
	xmlNodeVar.xmlEleName = "Person";
	xmlNodeVar.xmlEleValue = NULL;
	xmlnode.xmlNodeGroup = xmlNodeVar;


	xmlNodeVar.xmlAttrName = NULL;
	xmlNodeVar.xmlAttrValue = NULL;
	xmlNodeVar.xmlEleName = "name";
	xmlNodeVar.xmlEleValue = "������2";
	xmlnode.xmlNodeEle[0] = xmlNodeVar;


	xmlNodeVar.xmlAttrName = NULL;
	xmlNodeVar.xmlAttrValue = NULL;
	xmlNodeVar.xmlEleName = "age";
	xmlNodeVar.xmlEleValue = "562";
	xmlnode.xmlNodeEle[1] = xmlNodeVar;


	xmlNodeVar.xmlAttrName = NULL;
	xmlNodeVar.xmlAttrValue = NULL;
	xmlNodeVar.xmlEleName = "sex";
	xmlNodeVar.xmlEleValue = "��2";
	xmlnode.xmlNodeEle[2] = xmlNodeVar;
	xmlEleArr.xmlNodes[1] = xmlnode;
#pragma endregion
}


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ���������
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/25 23:46:00
 ***********************************************************************************************************/
OperationProfile_XML::~OperationProfile_XML()
{

}


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ�����XML�����ļ�
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/25 23:48:00
 ***********************************************************************************************************/
bool OperationProfile_XML::CreateProfile()
{
	try
	{
#pragma region [ ���ֲ�ͬ����XML�ļ��ķ�ʽ ]

		//TiXmlDocument* myDocument = new TiXmlDocument();															// ����һ��XML���ĵ�����

		//TiXmlElement* RootElement = new TiXmlElement(str_xmlelement.RootElement);									// ����һ����Ԫ�ز�����
		//myDocument->LinkEndChild(RootElement);

		//TiXmlElement* PersionElement = new TiXmlElement(str_xmlelement.GroupElement);								// ����һ��PersonԪ�ز�����
		//RootElement->LinkEndChild(PersionElement);

		//PersionElement->SetAttribute(str_xmlelement.Element1, str_xmlEvalue.GE_value);								// ����PersonԪ�ص�����

		//TiXmlElement* NameElement = new TiXmlElement(str_xmlelement.Element2);										// ����nameԪ�غ�ageԪ�ز�����
		//TiXmlElement* AgeElement = new TiXmlElement(str_xmlelement.Element3);
		//PersionElement->LinkEndChild(NameElement);
		//PersionElement->LinkEndChild(AgeElement);

		//TiXmlText* NameContent = new TiXmlText(str_xmlEvalue.E1_Value);												// ����nameԪ�غ�ageԪ�ص����ݲ�����
		//TiXmlText* AgeContent = new TiXmlText(str_xmlEvalue.E2_Value);

		//NameElement->LinkEndChild(NameContent);
		//AgeElement->LinkEndChild(AgeContent);

		//myDocument->SaveFile(IOperationProfile::ProfileAddress);													// ���浽�ļ�








		//TiXmlDocument* myDocument = new TiXmlDocument();															// ����һ��XML���ĵ�����

		//// ����һ�����ڵ�
		//TiXmlElement* RootElement = new TiXmlElement(str_xmlelement.RootElement);									// ����һ����Ԫ�ز�����
		//myDocument->LinkEndChild(RootElement);




		//// ����һ������ڵ�
		//TiXmlElement* PersionElement = new TiXmlElement(str_xmlelement.GroupElement);								// ����һ��PersonԪ�ز�����



		//// ����һ��Ԫ�ؼ�Ԫ��ֵ
		//TiXmlElement* NameElement = new TiXmlElement(str_xmlelement.Element2);										// ����nameԪ�غ�ageԪ�ز�����
		//TiXmlText* NameContent = new TiXmlText(str_xmlEvalue.E1_Value);												// ����nameԪ�غ�ageԪ�ص����ݲ�����


		//// ����һ��Ԫ�ؼ�Ԫ��ֵ
		//TiXmlElement* AgeElement = new TiXmlElement(str_xmlelement.Element3);
		//TiXmlText* AgeContent = new TiXmlText(str_xmlEvalue.E2_Value);


		//// �ѷ���ڵ�ŵ����ڵ�����
		//RootElement->LinkEndChild(PersionElement);

		//// ��Ԫ�طŵ�����ڵ�����
		//PersionElement->LinkEndChild(NameElement);
		//NameElement->LinkEndChild(NameContent);


		//PersionElement->LinkEndChild(AgeElement);
		//AgeElement->LinkEndChild(AgeContent);

		//// ���÷���ڵ������
		//PersionElement->SetAttribute(str_xmlelement.Element1, str_xmlEvalue.GE_value);								// ����PersonԪ�ص�����

		//myDocument->SaveFile(IOperationProfile::ProfileAddress);													// ���浽�ļ�
#pragma endregion

		TiXmlDocument* myDocument = new TiXmlDocument();															// ����һ��XML���ĵ�����
		TiXmlElement* RootElement;
		if (xmlEleArr.RootElement != NULL)
			RootElement = new TiXmlElement(xmlEleArr.RootElement);													// ����һ�����ڵ�
		else
			return false;
		myDocument->LinkEndChild(RootElement);

		for (int i = 0; i < groupNodeCount; i++)
		{
			TiXmlElement* PersionElement;
			if (xmlEleArr.xmlNodes[i].xmlNodeGroup.xmlEleName != NULL)
				PersionElement = new TiXmlElement(xmlEleArr.xmlNodes[i].xmlNodeGroup.xmlEleName);					// ����һ������ڵ�
			else
				return false;

			RootElement->LinkEndChild(PersionElement);																// �ѷ���ڵ�ŵ����ڵ�����
			for (int j = 0; j < elementCount; j++)
			{
				TiXmlElement* NameElement;
				if (xmlEleArr.xmlNodes[i].xmlNodeEle[j].xmlEleName != NULL)
					NameElement = new TiXmlElement(xmlEleArr.xmlNodes[i].xmlNodeEle[j].xmlEleName);					// ����Ԫ��
				else
					return false;

				TiXmlText* NameContent;
				if (xmlEleArr.xmlNodes[i].xmlNodeEle[j].xmlEleValue != NULL)
					NameContent = new TiXmlText(xmlEleArr.xmlNodes[i].xmlNodeEle[j].xmlEleValue);					// ����Ԫ�ص�ֵ
				else
					return false;

				PersionElement->LinkEndChild(NameElement);															// ��Ԫ�طŵ�����ڵ�����
				NameElement->LinkEndChild(NameContent);																// ��Ԫ��ֵ���õ�Ԫ�ؽڵ�����
				if (xmlEleArr.xmlNodes[i].xmlNodeEle[j].xmlAttrName != NULL &&xmlEleArr.xmlNodes[i].xmlNodeEle[j].xmlAttrValue != NULL)
					NameElement->SetAttribute(xmlEleArr.xmlNodes[i].xmlNodeEle[j].xmlAttrName, xmlEleArr.xmlNodes[i].xmlNodeEle[j].xmlAttrValue);
			}
			if (xmlEleArr.xmlNodes[i].xmlNodeGroup.xmlAttrName != NULL&& xmlEleArr.xmlNodes[i].xmlNodeGroup.xmlAttrValue != NULL)
				PersionElement->SetAttribute(xmlEleArr.xmlNodes[i].xmlNodeGroup.xmlAttrName, xmlEleArr.xmlNodes[i].xmlNodeGroup.xmlAttrValue);	// ����PersonԪ�ص�����
		}
		myDocument->SaveFile(IOperationProfile::ProfileAddress);													// ���浽�ļ�
		return true;
	}
	catch (string & e)
	{
		return false;
	}

}


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ�ɾ��XML�����ļ�
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/25 23:48:00
 ***********************************************************************************************************/
bool OperationProfile_XML::DeleteProfile()
{
	fstream file;
	file.open(IOperationProfile::ProfileAddress, ios::in);
	if (!file)
		return false;
	file.~basic_fstream();																							// �����ռ�õ��ļ�

	if (remove(IOperationProfile::ProfileAddress) != 0)
	{
		DWORD err = GetLastError();																					// ��ȡ������
		return false;
	}
	return true;
}


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ�����XML�����ļ�
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/25 23:49:00
 ***********************************************************************************************************/
bool OperationProfile_XML::UpdateProfile()
{
	return false;
}


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ���ȡXML�����ļ�
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/25 23:49:00
 ***********************************************************************************************************/
bool OperationProfile_XML::ReadProfile()
{
	return false;
}