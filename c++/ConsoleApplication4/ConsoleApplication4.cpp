#include <iostream>
using namespace std;
#pragma region Kullanıcının girdiği 2 deger arasındaki sayıların bölenlerini bulma
//
//
//
//void bolenBulma(int num) {
//
//	cout << num << " Sayisinin bolenleri:  ";
//	for (int i = 1; i <= num; i++)
//	{
//		if (num % i == 0)
//		{
//			cout << i << ", ";
//		}
//	}
//	cout << endl;
//}
//
//int main() {
//	int start, end;
//
//
//	cout << "Baslangic degerini giriniz: ";
//	cin >> start;
//	cout << "Bitis degerini giriniz: ";
//	cin >> end;
//	if (start <= 0)
//	{
//		start = 1;
//		cout << "Baslangic degeri 0 dan kucuk olamaz deger 1 olarak ayarlandi" << endl;
//
//	}cout << endl;
//#pragma region Normal
//
//
//	/*for (int i = start; i <= end; i++)
//	{
//
//		bolenBulma(i);
//	}*/
//#pragma endregion
//#pragma region tryCatch
//
//
//	try
//	{
//		if (start <= 0)
//		{
//			throw 404;
//		}
//		for (int i = start; i <= end; i++)
//		{
//
//			bolenBulma(i);
//		}
//	}
//	catch (int hatakodu)
//	{
//		cout << "Baslangic sayisi 0 dan kucuk olmamali" << endl;
//	}
//
//#pragma endregion
//}
#pragma endregion 
#pragma region pointers

//
//int main() {
//	int x = 10; 
//	int* ptr;						//pointer içerisinde adres tutan yapılardır
//	
//	ptr = &x;						//&x =address of x; x in adresi.
//	*ptr = 4;						//pointerın işaret ettiği adresteki değere erişip ona yeni atama yapar.
//
//	cout << x << " :  ";			//adresin içerisindeki değer
//	cout << ptr << endl;			//pointerın işaret ettiği adresi gösterir
//	cout << *ptr << endl;			//pointerın işaret ettiği adresin içeriğini gösterir
//}
#pragma endregion  
#pragma region arrayPointer
//
//
//int main() {
//	int arr[]{ 4,8,12,16 };
//	int* ptr;
//
//	ptr = arr;
//
//
//	*(ptr + 3) = 30;
//	
//	for (int i = 0; i < 4; i++)
//	{
//		*(ptr + i) += 2;
//		cout << *(ptr + i) << endl;
//
//	} 
//}
#pragma endregion 
#pragma region NewNullDelete


//int main() {
//
//	int* ptr;					//Pointerın kendisine yer ayrılıyor 
//	ptr = NULL;					//Ayrılan yer Null değerini dönderiyor
//
//
//	if (ptr!=NULL)				//Pointer Null a eşitse değer ataması yapılıyor
//	{
//		*ptr = 15;
//	}
//	else
//	{
//		ptr = new int(20);		//Aksi durumda Yeni bir yer ayrılıyor ve içerisine değer atanıyor
//	}
//	cout << *ptr;
//	delete ptr;					//Pointer bellekten siliniyor
//
//}
#pragma endregion
#pragma region PointerDöndurenFonksiyonlar
//
//
//int fonksiyon()
//{
//	int* ptr = new int;
//	*ptr = 15;
//	return *ptr;
//
//
//} 
//int main() {
//
//	int* ptr2 = new int;
//
//	*ptr2 = fonksiyon();
//	if (ptr2!=NULL)
//	{
//		cout << *ptr2;
//	}
//	else
//	{
//		cout << "Pointerınız Null Deger Döndermiştir"<<endl;
//	}
//
//
//}
#pragma endregion


int main() {
	int a[5], * p, z;
	for (int i = 0; i < 5; i++)
	{

		a[i] = i * i;     // 0  1  4  9  16
	}

	p = a;						//	p= 0  1  4  9  16
	z = *(p + 1) + *(a + 2);    //	1+4

	cout << z << endl;			// 5

	  

}