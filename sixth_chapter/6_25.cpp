#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
	string s = "";		//定义一个空字符串
	for(int i = 1; i < argc; ++i)
		s = s + argv[i] + " ";	//注意是从1开始，因为argv[0]存放的是程序的名字
	cout << s << endl;		//输出连接后的字符串s
	cout << argc << endl;	//顺便输出argc的值。
	return 0;
}

//执行时，在编译后可以输入以下内容：
/* ./a.out I am learning c++  
   这样将该会输出 :I am learning c++
				:  6
*/
