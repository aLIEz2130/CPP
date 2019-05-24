#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	string tmp;
	string maxstr;
	getline(cin, s);
	for (size_t i = 0; i <= s.size(); ++i)
	//for (size_t i = 0; i < s.size(); ++i) 会少进一次循环，将最后一个数字串存储在tmp但是没传递给maxstr，打印maxstr就只打印之前最长的数字串
	//for (size_t i = 0; i <= s.length(); ++i)//string中size和length作用一样。。。
	{
		if (s[i] <= '9'&& s[i] >= '0')//找到数字串
		{
			tmp += s[i];
		}
		else 	{
			if (tmp.size()>maxstr.size())//新找到的数字串与之前找到的最长数字串比较
			{
				maxstr = tmp;
			}
			else{
				tmp.clear();//临时字符串每次用完清空
			}
		}
	 }

	cout << maxstr << endl;
	system("pause");
	return 0;
}



//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;	
//	getline(cin, s);
//	string tmp;
//	string maxstr;
//	for (size_t i = 0; i < s.size(); ++i)//遍历字符串
//	{
//		if (s[i] <= '9'&& s[i] >= '0')//找到数字串
//		{
//			while (s[i] <= '9'&& s[i] >= '0')//将找到的数字串所有元素存储到临时字符串tmp中
//			{
//				tmp += s[i];
//				i++;
//			}
//			if (tmp.size()>maxstr.size())//新找到的数字串与之前找到的最长数字串比较
//			{
//				maxstr = tmp;
//
//			}
//		}
//		tmp.clear();//临时字符串每次用完清空
//	}
//	cout << maxstr<<endl;
//	system("pause");
//	return 0;
//}