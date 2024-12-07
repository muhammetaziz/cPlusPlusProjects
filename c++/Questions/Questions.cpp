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
int main() {
	int first=1, second=1, result;
	cout << first << " " << second << " ";
	for (int i = 0; i < 20; i++)
	{
		result = first + second;
		cout << result << " " ;
		first = second;
		second = result;
	}

}
#pragma endregion
