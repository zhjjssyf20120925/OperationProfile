// OperationProfile.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "OperationProfile_XML.h"

int _tmain(int argc, _TCHAR* argv[])
{
	IOperationProfile*  iop = new OperationProfile_XML();

	iop->ProfileAddress = "D:\\1.xml";
	iop->CreateProfile();
	//iop->DeleteProfile();

	system("Pause");
	return 0;
}

