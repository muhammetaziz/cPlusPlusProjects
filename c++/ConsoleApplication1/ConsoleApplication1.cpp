#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

//int main()
//{
//	int dizi[5] = { 8,9,5,6,7 };
//	array<int, 5>dizi2 = { 7,4,3,2,1 };
//	vector<int> dizi3;
//
//
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << dizi[i] << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < dizi2.size(); i++)
//	{
//		cout << dizi2[i] << endl;
//
//	}
//
//	int ekle;bool devam = true;
//	while (devam)
//	{
//		cout << "sayı gir" << endl;
//		cin >> ekle;
//		if (ekle != 0)
//		{
//			dizi3.push_back(ekle);
//		}
//		else {
//			cout << "baybay komutanım0" << endl;
//			devam = false;
//		}
//	}
//	for (int i = 0; i < dizi3.size(); i++)
//	{
//		cout << dizi3[i] << endl;
//
//	}
//
//
//
//
//}

int main() {

	int dizi4[3][3] = { {1,2,3}, {4,5,6},{7,8,9} };
	 

	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			cout << dizi4[i][k]<<",";

		}
		cout << endl;
	}
}