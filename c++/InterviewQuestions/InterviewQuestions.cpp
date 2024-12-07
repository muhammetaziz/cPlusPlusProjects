#include <iostream>
#include "Bank.h"
#include "list"
using namespace std;

#pragma region ArrayVaribleChange

//
////tek boyutlu bir tam sayı dizisinin içerisinde 2 ye tam bolunebilen sayıların karesını alıp diziyi değiştiren fonlsiyonu yazınız.
//// Main fonksiyonunda yeni diziyi ekrana yazdırınız.
//
//void arrayChange(int arr[], int size) {
//	
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i]%2==0)
//		{
//			arr[i] = arr[i] * arr[i];
//		}
//	} 
//} 
//
//int main()
//{
//	int mainArray[] = { 2,3,4,5,6,7,8,9,10,11 };
//	int elemanSayisi;
//	elemanSayisi = sizeof(mainArray) / sizeof(mainArray[0]);
//	
//	arrayChange(mainArray, elemanSayisi);
//	
//	for (int i = 0; i < elemanSayisi; i++)
//	{
//		cout << mainArray[i] << " ,";
//	}
//}

#pragma endregion 
#pragma region ArrayReverse

//
//void kullaniciGirisi(int arr[], int size) {
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Bir Sayi Giriniz:  ";
//		cin >> arr[i];
//	}
//}
//
//int main()
//{
//	int elemanSayisi;
//	cout << "Kac elemanli bir dizi olusturmak istersiniz? : ";
//	cin >> elemanSayisi;
//
//	int* TamSayi = new int[elemanSayisi];
//
//	kullaniciGirisi(TamSayi, elemanSayisi);
//
//	for (int i = elemanSayisi - 1; i >= 0; i--)
//	{
//		cout << TamSayi[i] << " ";
//	}
//}
#pragma endregion
#pragma region MainFonctionForBankingProject
int main() {
	int islem = 0;
	Bank musteri1("Ali", "KAYAHAN", 250.75, 172123);
	
	while (islem != 9)
	{
		cout << endl;
		cout << "Bir islem turu seciniz."<<endl;
		cout << "1- Bakiye goruntulemek." << endl;
		cout << "2- Para cekme." << endl;
		cout << "3- Para yatirma." << endl;
		cout << "9- Cikis." << endl;
		cout << endl;
		cin >> islem;
		switch (islem)
		{
		case 1:
		{
			musteri1.hesapBilgileriniGoster();
			break;
		}
		case 2:
		{
			musteri1.paraCekme();
			break;
		}
		case 3:
		{
			musteri1.paraYatirma();
			break;

		}
		case 9:
		{
			cout << "Iyi Gunler Dileriz." << endl;
			break;
		}
		default: {
			cout << "Hatali tuslama yaptiniz lutfen tekrar deneyiniz." << endl;
			break;

		}
		}
	}
}
#pragma endregion