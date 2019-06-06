#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream> 
using namespace std;
int main()
{
	int array[12] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
	int year;
	int month;
	int day;
	int sum = 0;
	while (cin >> year >> month >> day)
	{
		sum = 0;
		sum += array[month - 1];
		sum += day;
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			sum += 1;
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}