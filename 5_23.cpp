#include<iostream>
#include<stdexcept>

using namespace std;

int main()
{
	int a, b;
	while(cin >> a >> b)
	{
		try {
			if ( b == 0)		//把会出现异常的代码先放在try里面
				throw runtime_error("除数不能为0");		//然后抛出异常
			cout << a / b << endl;	//正常的部分放在try里面。
		}

		//用catch来处理异常， err.what就是抛出异常所描述的东西
		catch(runtime_error err){
			//以下语句是只有当出现异常时才会运行
			cout << err.what() << "\nTry Again? Enter y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}
	}

	return 0;
}
