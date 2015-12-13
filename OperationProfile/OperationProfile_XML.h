/**************************************************************************************************
 *    Copyright：An individual mandate_ZHJJSSYF
 * Create Class：赵进军
 *  Create Data：2015/11/25 23:11:00
 *  Description：操作XML文件
 **************************************************************************************************/
#pragma once

#include "IOperationProfile.h"
#include "tinyxml\tinystr.h"
#include "tinyxml\tinyxml.h"
#include "ConvertData.h"
#include <string>


/***********************************************************************************************************
 * 程序作者：赵进军
 * 变量功能：元素结构体
 * 注意事项：null
 * 修改日期：2015/11/28 23:01:00
 ***********************************************************************************************************/
struct xmlEle_Attr_Value
{
	char* xmlAttrName;																								// 属性名
	char* xmlAttrValue;																								// 属性值
	char* xmlEleName;																								// 元素名
	char* xmlEleValue;																								// 元素值
};


/***********************************************************************************************************
 * 程序作者：赵进军
 * 变量功能：元素结构体
 * 注意事项：null
 * 修改日期：2015/11/28 23:01:00
 ***********************************************************************************************************/
struct xmlNode
{
	struct xmlEle_Attr_Value xmlNodeGroup;
	struct xmlEle_Attr_Value xmlNodeEle[3];
};

/***********************************************************************************************************
 * 程序作者：赵进军
 * 变量功能：结构体数组
 * 注意事项：null
 * 修改日期：2015/11/28 19:47:00
 ***********************************************************************************************************/
struct xmlElementArray
{
	char* RootElement;
	struct xmlNode xmlNodes[10];
};



class OperationProfile_XML :public IOperationProfile
{
public:
	OperationProfile_XML();																							// 构造函数
	virtual bool CreateProfile();																					// 创建XML配置文件
	virtual	bool DeleteProfile();																					// 删除XML配置文件
	virtual bool UpdateProfile();																					// 更新XML配置文件
	virtual bool ReadProfile();																						// 读取XML配置文件
	virtual	~OperationProfile_XML();



	bool DeleteNodeByNameIndex(char* delNodeName, int nodeIndex);													// 删除XML文件中指定位置的节点
	bool DeleteNodeByNameAll(char* delNodeName);																	// 删除XML文件中所有符合条件的节点
	bool GetNodePointerByName(TiXmlElement* pRootEle, char* strNodeName, TiXmlElement* &node, int nodeIndex);		// 通过节点名获取XML的节点指针
	bool GetNodePointerByNameAll(TiXmlElement* pRootEle, char*  strNodeName, TiXmlElement* retNode[]);				// 通过节点名获取XML中所有符合条件的节点指针


private:
	bool XMLExits();																								// 判断XML文件是否存在

protected:
	int groupNodeCount = 2;																							// 当前XML包含节点的个数
	int elementCount = 3;																							// 每一个节点下面元素的个数
	int arrayIndex = 0;																								// 用于遍历XML节点的时候使用，使用之前必须为0

	xmlElementArray xmlEleArr;
	xmlNode xmlnode;
	xmlEle_Attr_Value xmlNodeVar;

};

