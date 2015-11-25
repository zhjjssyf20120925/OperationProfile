/**************************************************************************************************
 *    Copyright��An individual mandate_ZHJJSSYF
 * Create Class���Խ���
 *  Create Data��2015/11/25 22:54:00
 *  Description�������ļ������ӿ�ͷ�ļ�
 **************************************************************************************************/

class IOperationProfile
{

public:
	char* ProfileAddress = "";																						// ���������ļ���ʵ�ʵ�ַ

	IOperationProfile()																								// Ĭ�������ļ�����ִ���ļ������棬Ĭ��ʹ��config.ini����config.xml
	{
		ProfileAddress = "";
	};

	IOperationProfile(char* profileAddress)																			// Ĭ�������ļ�����ִ���ļ������棬Ĭ��ʹ��config.ini����config.xml
	{
		ProfileAddress = profileAddress;
	};

	/// �ṩ������ʹ�õĽӿ�һ����ô��麯��
	virtual	bool CreateProfile() = 0;																				// ���������ļ�

	virtual	bool DeleteProfile() = 0;																				// ɾ�������ļ�

	virtual	bool UpdateProfile() = 0;																				// ���������ļ�

	virtual bool ReadProfile() = 0;																					// ��ȡ�����ļ�

	virtual	~IOperationProfile()																					// ��������,���������ļ���ַ--ע�⣬���Ҫ������������������ܹ�������ʵ�ֲ�������������������������
	{
		ProfileAddress = "";
	};

private:
	
};
