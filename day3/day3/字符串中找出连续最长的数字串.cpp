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
	for (size_t i = 0; i < s.size(); ++i)//�����ַ���
	{
		if (s[i] <= '9'&& s[i] >= '0')//�ҵ����ִ�
		{
			while (s[i] <= '9'&& s[i] >= '0')//���ҵ������ִ�����Ԫ�ش洢����ʱ�ַ���tmp��
			{
				tmp += s[i];
				i++;
			}
			if (tmp.size()>maxstr.size())//���ҵ������ִ���֮ǰ�ҵ�������ִ��Ƚ�
			{
				maxstr = tmp;
			}
		}
		tmp.clear();//��ʱ�ַ���ÿ���������
	}
	cout << maxstr<<endl;
	system("pause");
	return 0;
}