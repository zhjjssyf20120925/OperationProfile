#pragma once
#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include "OperationProfile_XML.h"

using namespace std;

/***********************************************************************************************************
 * 程序作者：赵进军
 * 函数功能：构造函数
 * 参数说明：null
 * 注意事项：null
 * 修改日期：2015/11/25 23:46:00
 ***********************************************************************************************************/
OperationProfile_XML::OperationProfile_XML()
{
#pragma region [   XML文件结构体元数据组装   ]
	xmlEleArr.RootElement = "Persons";

	xmlNodeVar.xmlAttrName = "ID";
	xmlNodeVar.xmlAttrValue = "1";
	xmlNodeVar.xmlEleName = "Person";
	xmlNodeVar.xmlEleValue = NULL;
	xmlnode.xmlNodeGroup = xmlNodeVar;


	xmlNodeVar.xmlAttrName = NULL;
	xmlNodeVar.xmlAttrValue = NULL;
	xmlNodeVar.xmlEleName = "name";
	xmlNodeVar.xmlEleValue = "周星星";
	xmlnode.xmlNodeEle[0] = xmlNodeVar;


	xmlNodeVar.xmlAttrName = NULL;
	xmlNodeVar.xmlAttrValue = NULL;
	xmlNodeVar.xmlEleName = "age";
	xmlNodeVar.xmlEleValue = "56";
	xmlnode.xmlNodeEle[1] = xmlNodeVar;


	xmlNodeVar.xmlAttrName = NULL;
	xmlNodeVar.xmlAttrValue = NULL;
	xmlNodeVar.xmlEleName = "sex";
	xmlNodeVar.xmlEleValue = "男";
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
	xmlNodeVar.xmlEleValue = "周星星2";
	xmlnode.xmlNodeEle[0] = xmlNodeVar;


	xmlNodeVar.xmlAttrName = NULL;
	xmlNodeVar.xmlAttrValue = NULL;
	xmlNodeVar.xmlEleName = "age";
	xmlNodeVar.xmlEleValue = "562";
	xmlnode.xmlNodeEle[1] = xmlNodeVar;


	xmlNodeVar.xmlAttrName = NULL;
	xmlNodeVar.xmlAttrValue = NULL;
	xmlNodeVar.xmlEleName = "sex";
	xmlNodeVar.xmlEleValue = "男2";
	xmlnode.xmlNodeEle[2] = xmlNodeVar;
	xmlEleArr.xmlNodes[1] = xmlnode;
#pragma endregion
}


/***********************************************************************************************************
 * 程序作者：赵进军
 * 函数功能：析构函数
 * 参数说明：null
 * 注意事项：null
 * 修改日期：2015/11/25 23:46:00
 ***********************************************************************************************************/
OperationProfile_XML::~OperationProfile_XML()
{

}


/***********************************************************************************************************
 * 程序作者：赵进军
 * 函数功能：创建XML配置文件
 * 参数说明：null
 * 注意事项：null
 * 修改日期：2015/11/25 23:48:00
 ***********************************************************************************************************/
bool OperationProfile_XML::CreateProfile()
{
	try
	{
#pragma region [ 两种不同操作XML文件的方式 ]

		//TiXmlDocument* myDocument = new TiXmlDocument();															// 创建一个XML的文档对象

		//TiXmlElement* RootElement = new TiXmlElement(str_xmlelement.RootElement);									// 创建一个根元素并连接
		//myDocument->LinkEndChild(RootElement);

		//TiXmlElement* PersionElement = new TiXmlElement(str_xmlelement.GroupElement);								// 创建一个Person元素并连接
		//RootElement->LinkEndChild(PersionElement);

		//PersionElement->SetAttribute(str_xmlelement.Element1, str_xmlEvalue.GE_value);								// 设置Person元素的属性

		//TiXmlElement* NameElement = new TiXmlElement(str_xmlelement.Element2);										// 创建name元素和age元素并连接
		//TiXmlElement* AgeElement = new TiXmlElement(str_xmlelement.Element3);
		//PersionElement->LinkEndChild(NameElement);
		//PersionElement->LinkEndChild(AgeElement);

		//TiXmlText* NameContent = new TiXmlText(str_xmlEvalue.E1_Value);												// 设置name元素和age元素的内容并连接
		//TiXmlText* AgeContent = new TiXmlText(str_xmlEvalue.E2_Value);

		//NameElement->LinkEndChild(NameContent);
		//AgeElement->LinkEndChild(AgeContent);

		//myDocument->SaveFile(IOperationProfile::ProfileAddress);													// 保存到文件








		//TiXmlDocument* myDocument = new TiXmlDocument();															// 创建一个XML的文档对象

		//// 创建一个根节点
		//TiXmlElement* RootElement = new TiXmlElement(str_xmlelement.RootElement);									// 创建一个根元素并连接
		//myDocument->LinkEndChild(RootElement);




		//// 创建一个分组节点
		//TiXmlElement* PersionElement = new TiXmlElement(str_xmlelement.GroupElement);								// 创建一个Person元素并连接



		//// 创建一个元素及元素值
		//TiXmlElement* NameElement = new TiXmlElement(str_xmlelement.Element2);										// 创建name元素和age元素并连接
		//TiXmlText* NameContent = new TiXmlText(str_xmlEvalue.E1_Value);												// 设置name元素和age元素的内容并连接


		//// 创建一个元素及元素值
		//TiXmlElement* AgeElement = new TiXmlElement(str_xmlelement.Element3);
		//TiXmlText* AgeContent = new TiXmlText(str_xmlEvalue.E2_Value);


		//// 把分组节点放到根节点下面
		//RootElement->LinkEndChild(PersionElement);

		//// 把元素放到分组节点下面
		//PersionElement->LinkEndChild(NameElement);
		//NameElement->LinkEndChild(NameContent);


		//PersionElement->LinkEndChild(AgeElement);
		//AgeElement->LinkEndChild(AgeContent);

		//// 设置分组节点的属性
		//PersionElement->SetAttribute(str_xmlelement.Element1, str_xmlEvalue.GE_value);								// 设置Person元素的属性

		//myDocument->SaveFile(IOperationProfile::ProfileAddress);													// 保存到文件
#pragma endregion

		TiXmlDocument* myDocument = new TiXmlDocument();															// 创建一个XML的文档对象
		TiXmlElement* RootElement;
		if (xmlEleArr.RootElement != NULL)
			RootElement = new TiXmlElement(xmlEleArr.RootElement);													// 创建一个根节点
		else
			return false;
		myDocument->LinkEndChild(RootElement);

		for (int i = 0; i < groupNodeCount; i++)
		{
			TiXmlElement* PersionElement;
			if (xmlEleArr.xmlNodes[i].xmlNodeGroup.xmlEleName != NULL)
				PersionElement = new TiXmlElement(xmlEleArr.xmlNodes[i].xmlNodeGroup.xmlEleName);					// 创建一个分组节点
			else
				return false;

			RootElement->LinkEndChild(PersionElement);																// 把分组节点放到根节点下面
			for (int j = 0; j < elementCount; j++)
			{
				TiXmlElement* NameElement;
				if (xmlEleArr.xmlNodes[i].xmlNodeEle[j].xmlEleName != NULL)
					NameElement = new TiXmlElement(xmlEleArr.xmlNodes[i].xmlNodeEle[j].xmlEleName);					// 创建元素
				else
					return false;

				TiXmlText* NameContent;
				if (xmlEleArr.xmlNodes[i].xmlNodeEle[j].xmlEleValue != NULL)
					NameContent = new TiXmlText(xmlEleArr.xmlNodes[i].xmlNodeEle[j].xmlEleValue);					// 设置元素的值
				else
					return false;

				PersionElement->LinkEndChild(NameElement);															// 把元素放到分组节点下面
				NameElement->LinkEndChild(NameContent);																// 把元素值放置到元素节点下面
				if (xmlEleArr.xmlNodes[i].xmlNodeEle[j].xmlAttrName != NULL &&xmlEleArr.xmlNodes[i].xmlNodeEle[j].xmlAttrValue != NULL)
					NameElement->SetAttribute(xmlEleArr.xmlNodes[i].xmlNodeEle[j].xmlAttrName, xmlEleArr.xmlNodes[i].xmlNodeEle[j].xmlAttrValue);
			}
			if (xmlEleArr.xmlNodes[i].xmlNodeGroup.xmlAttrName != NULL&& xmlEleArr.xmlNodes[i].xmlNodeGroup.xmlAttrValue != NULL)
				PersionElement->SetAttribute(xmlEleArr.xmlNodes[i].xmlNodeGroup.xmlAttrName, xmlEleArr.xmlNodes[i].xmlNodeGroup.xmlAttrValue);	// 设置Person元素的属性
		}
		myDocument->SaveFile(IOperationProfile::ProfileAddress);													// 保存到文件
		return true;
	}
	catch (string & e)
	{
		return false;
	}

}


/***********************************************************************************************************
 * 程序作者：赵进军
 * 函数功能：删除XML配置文件
 * 参数说明：null
 * 注意事项：null
 * 修改日期：2015/11/25 23:48:00
 ***********************************************************************************************************/
bool OperationProfile_XML::DeleteProfile()
{
	fstream file;
	file.open(IOperationProfile::ProfileAddress, ios::in);
	if (!file)
		return false;
	file.~basic_fstream();																							// 解除被占用的文件

	if (remove(IOperationProfile::ProfileAddress) != 0)
	{
		DWORD err = GetLastError();																					// 获取错误码
		return false;
	}
	return true;
}


/***********************************************************************************************************
 * 程序作者：赵进军
 * 函数功能：更新XML配置文件
 * 参数说明：null
 * 注意事项：null
 * 修改日期：2015/11/25 23:49:00
 ***********************************************************************************************************/
bool OperationProfile_XML::UpdateProfile()
{
	return false;
}


/***********************************************************************************************************
 * 程序作者：赵进军
 * 函数功能：读取XML配置文件
 * 参数说明：null
 * 注意事项：null
 * 修改日期：2015/11/25 23:49:00
 ***********************************************************************************************************/
bool OperationProfile_XML::ReadProfile()
{
	return false;
}