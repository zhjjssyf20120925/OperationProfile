// OperationProfile.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "OperationProfile_XML.h"

int _tmain(int argc, _TCHAR* argv[])
{
	/*IOperationProfile*  iop = new OperationProfile_XML();

	iop->ProfileAddress = "D:\\1.xml";*/
	//iop->CreateProfile();
	//iop->DeleteProfile();


	OperationProfile_XML op_xml;
	op_xml.ProfileAddress = "D:\\1.xml";
	op_xml.CreateProfile();
	op_xml.ReadProfile();
	//op_xml.UpdateProfileAllText("age", "10000");
	//op_xml.DeleteNodeByNameIndex("age", 1);
	system("Pause");
	return 0;
}

