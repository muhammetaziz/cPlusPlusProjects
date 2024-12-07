#include <iostream>
#include <limits>
using namespace std;
#pragma region Girilen Sayının en buyuk ve en kucuk degerını bulan program
//int main()
//{
//	int boyut,max=INT_MIN, min=INT_MAX ;
//	cout << "Kac elemanli bir dizi olusturmak istiyorsunuz ?:  ";
//	cin >> boyut;
//	int* array = new int[boyut];
//
//	for (int i = 0; i < boyut; i++)
//		cin >> array[i];
//
//	for (int i = 0; i < boyut; i++)
//	{
//		if (array[i]>=max)
//			max = array[i];
//		if (array[i]<=min)
//			min = array[i];
//	}
//	cout << "Max: " << max << " Min: " << min<<endl;
//}
#pragma endregion
#pragma region Ebob

//
//int ebob(int a, int b) {
//    while (b != 0) {
//        int kalan = a % b;  // Kalanı bul
//        a = b;               // a'yı b'ye eşitle
//        b = kalan;           // b'yi kalanla eşitle
//    }
//    return a;  // Sonuç a olacak, çünkü b sıfır olacak
//}
//
//int main() {
//    int sayi1, sayi2;
//
//    // Kullanıcıdan iki sayı al
//    cout << "Birinci sayiyi girin: ";
//    cin >> sayi1;
//    cout << "Ikinci sayiyi girin: ";
//    cin >> sayi2;
//
//    // EBOB'u hesapla ve yazdır
//    int sonuc = ebob(sayi1, sayi2);
//    cout << "EBOB(" << sayi1 << ", " << sayi2 << ") = " << sonuc << endl;
//
//    return 0;
//}
#pragma endregion
#pragma region Fibonacci
//int main() {
//	int boyut;
//	cout << "Serimiz kac elemana kadar devam etsin ?: ";
//	cin >> boyut;
//	int first=1, second=1, result;
//	cout << first  << "\n" << second <<endl;
//	for (int i = 0; i <= boyut; i++)
//	{
//		result = first + second;
//		cout << result <<endl;
//		first = second;
//		second = result;
//	}
//}
#pragma endregion
#pragma region Mukemmel sayılar


int exelentNumber(int number) {
	int result = 0;
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			result += i;
		}
	}
	return result;
}

int main() {
	int islem = 0;
	cout << "1- Mukemmel sayi hesaplama" << endl;
	cout << "2- Mukemmel sayi listesi" << endl;
	cout << "9- Cikis" << endl;
	cin >> islem;

	switch (islem)
	{
	case 1: {
		int sayi;
		cout << "Sorgulamak istediginiz sayiyi giriniz" << endl;
		cin >> sayi;
		if (exelentNumber(sayi) == sayi)
		{
			cout << sayi << " Mukemmel sayidir." << endl;
		}
		else
		{
			cout << sayi << " Mukemmel sayi degildir." << endl;
		}
		break;
	}
	case 2: {
		int boyut;
		cout << "Hangi sayiya kadar kontrol etmek istiyorsunuz (max:2,147,483,647)" << endl;
		cin >> boyut;
		 
		for (int i = 1; i < boyut; i++)
		{
			if (exelentNumber(i) == i)
			{
				cout << i << " Mukemmel sayidir." << endl;
			} 
		}
		break;
	}
	case 9: break;
	default:
		cout << "Gecerli bir deger giriniz";
		break;
	} 
}
#pragma endregion
