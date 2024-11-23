#include <iostream>
#include <chrono>
using namespace std;

//void reverseArray(int dizi[], int size) {
//	for (int i = size; i > 0; i--)
//	{
//		cout <<"Siralanmis diziniz" << dizi[i - 1] << " ";
//	}
//}
//
//
//int main()
//{
//	int arr[4];
//	for (int i = 0; i < 4; i++)
//	{
//		cout << i + 1 << " . sayiyi giriniz:  ";
//		cin >> arr[i];
//	}
//	reverseArray(arr, 4);
//
//}

//
//int diziOrtalaması(int arr[],int size) {
//	int toplam = 0;
//	for (int i = 0; i < size; i++)
//	{
//		toplam = toplam + arr[i];
//	} 
//	return toplam/size;
//} 
//int main() {
//	int notlar[10],sayac=0;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << i+1 << ". ogrencinin notunu giriniz: ";
//		cin >> notlar[i];
//		if (notlar[i] >= diziOrtalaması(notlar, 10))
//		{
//			sayac++;
//		}
//	}
//	cout << "Ortalama uzerinde not alan ogrencilerin sayisi:  "<< sayac<< "  not ortalaması: " << diziOrtalaması(notlar, 10) << endl;
//}

//
//void asalMi(int sayi) {
//	int sayac = 0;
//	for (int i = 2; i < sayi; i++)
//	{
//		if (sayi % i == 0)
//		{
//			sayac++;
//			if (sayac != 0)
//			{
//				break;
//			}
//		}
//	}
//	if (sayac == 0)
//	{
//		cout << sayi << ", ";
//	}
//}
//
//int main() {
//	chrono::steady_clock::time_point begin = chrono::steady_clock::now();
//	int userNum;
//	cout << "Bir Sayi Giriniz: ";
//	cin >> userNum; 
//	for (int i = 2; i < userNum; i++)
//	{
//		asalMi(i);
//	}
//	cout << endl;
//	chrono::steady_clock::time_point end = chrono::steady_clock::now();
//	cout << "Time diffrance= " << chrono::duration_cast<chrono::microseconds>(end - begin).count() << " microsecond" << endl;
//}

bool farkliMi(int arr[], int size) {
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				return false;
				 
			}
		}

	}
	return true;
} 
int main() {
	int dizi[4];

	for (int i = 1000; i <= 9999; i++)
	{
		int temp = i;
		for (int j = 0; j < 4; j++)
		{
			dizi[j] = temp % 10;
			temp = temp / 10;
		}
		if (farkliMi(dizi, 4))
		{
			cout << i << endl; 
		} 
	} 
} 
   
