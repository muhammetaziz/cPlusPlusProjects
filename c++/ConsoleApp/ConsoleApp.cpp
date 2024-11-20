#include <iostream>
using namespace std;

int main()
{
	int islem;
	float firsNum, secondNum, result;
	bool isNext = true;

	while (isNext)
	{

		cout << "Yapmak istediğiniz işlemi giriniz (Toplama:1,Cikarma:2,Carpma:3,Bolme:4,Cikis:0)" << endl;
		cin >> islem;
		if (islem < 1 || islem >= 5)
		{
			cout << "Hatali islem girdiniz" << endl;
		}
		else
		{
			cout << "birinci sayiyi giriniz" << endl;
			cin >> firsNum;

			cout << "ikinci sayiyi giriniz" << endl;
			cin >> secondNum;
		}

		if (islem == 1)
		{
			cout << firsNum + secondNum << endl;
		}
		else if (islem == 2)
		{
			cout << firsNum - secondNum << endl;
		}
		else if (islem == 3)
		{
			cout << firsNum * secondNum << endl;
		}
		else if (islem == 4)
		{
			cout << firsNum / secondNum << endl;
		}
		else if (islem == 0)
		{
			isNext = false;
			break;
		}
	}
	cout << "İyi Günler Dileriz";
	return 0;
}

