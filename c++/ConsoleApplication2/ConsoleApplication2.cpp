
#include <iostream>
using namespace std;

int main()
{
#pragma region deneme
	/*int userInput, sayac = 0;
	cout << "Bir Sayı Giriniz" << endl;
	cin >> userInput;*/

	//for (int i = 0; i <= userInput; i++)
	//{
	//	for (int z = 0; z < i; z++)
	//	{
	//		cout << i;
	//	}
	//	cout << endl;

	//} 
	//for (int i = userInput; i > 0; i--)
	//{
	//	for (int k = i; k >0; k--)
	//	{

	//		cout << i ;
	//	}cout << endl;
	//}
#pragma endregion
#pragma region AsalSayı

	//int userInput, sayac = 0;
	//cout << "Bir Sayı Giriniz" << endl;
	//cin >> userInput;

	//for (int i = 1; i < userInput; i++)
	//{
	//	if (userInput%i==0)
	//	{
	//		 sayac++;
	//	} 
	//}
	//if (sayac<=1)
	//{
	//	cout << "sayımız asaldır";
	//}
	//else
	//{
	//	cout << "sayımız asal değildir" << endl;
	//}
#pragma endregion
	 
	float result, userInput;
	cout << "Bir Sayı Giriniz" << endl;
	cin >> userInput; 
	result = userInput * 0.18 + userInput;
	cout << result << endl;
}
