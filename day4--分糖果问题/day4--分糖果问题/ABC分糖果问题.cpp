#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int A = (a + c) / 2;
	int C = (d - b) / 2;
	int B1 = (b + d) / 2;
	int B2 = (c - a) / 2;
	if (B1 != B2)
	{
		cout << 'No' << endl;
	}
	else
	{
		cout << A << ' ' << B1 << ' ' << C;
	}
	system("pause");
	return 0;
}