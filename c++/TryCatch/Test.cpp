#include <iostream>
#include "TryCatch.h"

using namespace std;

int main()
{
	int x;
	cout << "Bir Sayi Girini" << endl;
	cin >> x;

	try
	{
		if (x == 0)
		{
			throw HataSinifi("Hata Mesaji 1 ");
		}
		else if (x < 0)
		{
			throw 101;
		}
	}
	//catch(...){
	//	//coklu hata yakalama
	//	cout << "Hata var"<<endl;
	//}
	catch (HataSinifi h)
	{
		cout << h.getHataMesaji() << endl;
	}
	catch (int hatakodu) {
		cout << "Hata Kodunuz: " <<hatakodu <<endl;
	}

	cout << "Tekrar Bir Sayi Giriniz" << endl;
	cin >> x;
}
