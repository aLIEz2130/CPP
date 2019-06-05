#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int count = 0;
	getline(cin, s);
	//先计算参数数量
	for (size_t  i = 0; i <s.size(); i++)
	{
		if (s[i]==' ')
		{
			count++;
		}
		//如果是双引号则向后遍历，知道找到下一个双引号结束
		if (s[i]=='"')
		{
			do
			{
				i++;
			} while (s[i] != '"');
		}
	}
	//空格数量比参数数量少1
	cout << count + 1 << endl;
	for (size_t i = 0; i < s.size(); i++)
	{
		int flag = 0;
//有双引号，flag通过异或变为1；下次再遇到双引号，flag置为0;
		if (s[i] == '"')
		{
			flag ^= 0;
		}
//不打印上双引号和普通空格
		if (s[i]!=' '&&s[i]!='"')
		{
			cout<<s[i];
		}
//双引号中的空格需要打印
		if (s[i] == ' '&& flag==1)
		{
			cout << s[i];
		}
//双引号之外的空格就换行
		if (s[i] == ' '&& flag == 0)
		{
			cout << endl;
		}
	}
	system("pause");
	return 0;
}