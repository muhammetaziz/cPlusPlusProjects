#include <iostream>
using namespace std;


void bolenBulma(int num) {

	cout << num << " Sayisinin bolenleri:  ";
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cout << i << ", ";
		}
	}
	cout << endl;
}

int main() {
	int start, end;


	cout << "Baslangic degerini giriniz: ";
	cin >> start;
	cout << "Bitis degerini giriniz: ";
	cin >> end;
	if (start <= 0)
	{
		start = 1;
		cout << "Baslangic degeri 0 dan kucuk olamaz deger 1 olarak ayarlandi" << endl;

	}cout << endl;
#pragma region Normal


	/*for (int i = start; i <= end; i++)
	{

		bolenBulma(i);
	}*/
#pragma endregion
#pragma region tryCatch


	try
	{
		if (start <= 0)
		{
			throw 404;
		}
		for (int i = start; i <= end; i++)
		{

			bolenBulma(i);
		}
	}
	catch (int hatakodu)
	{
		cout << "Baslangic sayisi 0 dan kucuk olmamali" << endl;
	}

#pragma endregion
}
