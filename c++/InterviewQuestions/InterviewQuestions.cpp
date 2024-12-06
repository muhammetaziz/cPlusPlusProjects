 #include <iostream>
using namespace std;

#pragma region FirstQuestion

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


void kullaniciGirisi(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "Bir Sayi Giriniz:  ";
		cin >> arr[i];
	}
}
 
int main() 
{
	int elemanSayisi;
	cout << "Kac elemanli bir dizi olusturmak istersiniz? : ";
	cin >> elemanSayisi;

	int* TamSayi = new int[elemanSayisi];

	kullaniciGirisi(TamSayi, elemanSayisi);

	for (int i = elemanSayisi-1; i >= 0; i--)
	{
		cout << TamSayi[i]<<" ";
	}
}