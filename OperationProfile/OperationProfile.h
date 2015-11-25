/**************************************************************************************************
 *    Copyright：An individual mandate_ZHJJSSYF
 * Create Class：赵进军
 *  Create Data：2015/11/25 22:54:00
 *  Description：配置文件操作接口头文件
 **************************************************************************************************/

class IOperationProfile
{

public:
	char* ProfileAddress = "";																						// 缓存配置文件的实际地址

	IOperationProfile()																								// 默认配置文件存在执行文件夹里面，默认使用config.ini或者config.xml
	{
		ProfileAddress = "";
	};

	IOperationProfile(char* profileAddress)																			// 默认配置文件存在执行文件夹里面，默认使用config.ini或者config.xml
	{
		ProfileAddress = profileAddress;
	};

	/// 提供给外面使用的接口一般采用纯虚函数
	virtual	bool CreateProfile() = 0;																				// 创建配置文件

	virtual	bool DeleteProfile() = 0;																				// 删除配置文件

	virtual	bool UpdateProfile() = 0;																				// 更新配置文件

	virtual bool ReadProfile() = 0;																					// 读取配置文件

	virtual	~IOperationProfile()																					// 析构函数,清除缓存的文件地址--注意，最好要定义此虚析构函数，能够避免其实现不能正常调用析构函数的问题
	{
		ProfileAddress = "";
	};

private:
	
};
