#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1, s2;
	 s2=' ';
	 while (1)
	 {
		 cin >> s1;
			 s2 = s1 + " " + s2;
	cout << s2 << endl;
	 }


	system("pause");
	return 0;
}





//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	vector<int> v;
//	v.resize(n);
//	for (int i = 0; i < n; ++i) {
//		cin >> v[i];
//	}
//	// ret Ϊ���շ���ֵ�������Ϊ 1
//	// ������ֵ���߹�ֵ���мӼӲ���
//	int ret = 1;
//	for (int i = 1; i < n - 1; i++) {
//		if (v[i] > v[i - 1] && v[i] > v[i + 1]
//			|| v[i] < v[i - 1] && v[i] < v[i + 1]) {
//			ret++;
//			// ÿһ���������СΪ���������Ȼ��߲�������ŵ��Ǹ�Ԫ��һ�����ǲ�����߲���
//			// ���ÿ���ҵ����岨�Ⱥ� i++������һ��Ԫ��
//			if (i < n - 3) {
//				i++;
//			}
//		}
//	}
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> ptr(n, 0);
//	for (int i = 0; i < n; i++)
//		cin >> ptr[i];
//	int i = 0;
//	int num = 0;
//	while (i < n - 1)
//	{
//		if (ptr[i] > ptr[i + 1])
//		{
//			num++;
//			while (i < n - 1 && ptr[i] >= ptr[i + 1])
//			{
//				i++;
//			}
//			i++;
//			if (i == n - 1 && ptr[i - 1] < ptr[i])
//				num++;
//		}
//		else if (ptr[i] < ptr[i + 1])
//		{
//			num++;
//			while (i < n - 1 && ptr[i] <= ptr[i + 1])
//			{
//				i++;
//			}
//			i++;
//			if (i == n - 1 && ptr[i - 1] > ptr[i])
//				num++;
//		}
//		else
//		{
//			while (i < n - 1 && ptr[i] == ptr[i + 1])
//			{
//				i++;
//			}
//		}
//	}
//	cout << num << endl;
//		system("pause");
//		return 0;
//
//}