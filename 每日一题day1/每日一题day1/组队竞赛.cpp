#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
	/*�������Ҫ˼·��̰���㷨����֤ÿ��ĵڶ���ֵȡ����������
	Ȼ��ȡ �� 3n - 1  3n - 3  3n - 5...��Ԫ���ۼӼ���
	���� ��������� �� 1  2  5  5  8  9  ����ôȡ  8 �� 5��ӵ��� 13
	����ÿ�ξ���ȡ��󣬵�������������������λ���������˶�����Σ�ȡ ÿ���еڶ���� */
	int n;
	while (cin >> n)
	{
		vector<int> a(3 * n);
		long long sum = 0;
		for (int i = 0; i<3 * n; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for (int i = n; i <= 3 * n - 2; i += 2)
		{
			sum += a[i];
		}
		cout << sum << endl;
	}

}
