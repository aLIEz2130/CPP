#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int count = 0;
	getline(cin, s);
	//�ȼ����������
	for (size_t  i = 0; i <s.size(); i++)
	{
		if (s[i]==' ')
		{
			count++;
		}
		//�����˫��������������֪���ҵ���һ��˫���Ž���
		if (s[i]=='"')
		{
			do
			{
				i++;
			} while (s[i] != '"');
		}
	}
	//�ո������Ȳ���������1
	cout << count + 1 << endl;
	for (size_t i = 0; i < s.size(); i++)
	{
		int flag = 0;
//��˫���ţ�flagͨ������Ϊ1���´�������˫���ţ�flag��Ϊ0;
		if (s[i] == '"')
		{
			flag ^= 0;
		}
//����ӡ��˫���ź���ͨ�ո�
		if (s[i]!=' '&&s[i]!='"')
		{
			cout<<s[i];
		}
//˫�����еĿո���Ҫ��ӡ
		if (s[i] == ' '&& flag==1)
		{
			cout << s[i];
		}
//˫����֮��Ŀո�ͻ���
		if (s[i] == ' '&& flag == 0)
		{
			cout << endl;
		}
	}
	system("pause");
	return 0;
}