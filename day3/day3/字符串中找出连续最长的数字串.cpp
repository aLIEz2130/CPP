#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;	
	getline(cin, s);
	string tmp;
	string maxstr;
    int maxlength = 0;
	for (size_t i = 0; i < s.size(); ++i)//遍历字符串
	{
		if (s[i] <= '9'&& s[i] >= '0')//找到数字串
		{
			while (s[i] <= '9'&& s[i] >= '0')//将找到的数字串所有元素存储到临时字符串tmp中
			{
				tmp += s[i];
				i++;
			}
			if (tmp.size()>maxlength)//新找到的数字串与之前找到的最长数字串比较
			{
				maxstr = tmp;
				maxlength = tmp.size();
			}
		}
		tmp.clear();//临时字符串每次用完清空
	}
	cout << maxstr<<endl;
	system("pause");
	return 0;
}