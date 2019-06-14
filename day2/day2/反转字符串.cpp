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
//	// ret 为最终返回值，最基础为 1
//	// 遇到峰值或者谷值进行加加操作
//	int ret = 1;
//	for (int i = 1; i < n - 1; i++) {
//		if (v[i] > v[i - 1] && v[i] > v[i + 1]
//			|| v[i] < v[i - 1] && v[i] < v[i + 1]) {
//			ret++;
//			// 每一组的数据最小为两个，波谷或者波峰紧接着的那个元素一定不是波峰或者波谷
//			// 因此每次找到波峰波谷后将 i++，跳过一个元素
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