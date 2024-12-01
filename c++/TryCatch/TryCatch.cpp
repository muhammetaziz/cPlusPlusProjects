#include <iostream>
using namespace std;


int main2()
{
	try
	{
		int x = 30;
		int y;
		cout << "Lutfen pozitif bir sayi giriniz";
		cin >> y;
		if (y == 0)
		{
			throw runtime_error(
				"Division by zero not allowed!");
		}
		else if (y < 0)
		{
			throw 101;
		}
		else if (y > x)
		{
			throw 102;
		}
		else
		{
			double z = double(x) / y;
			cout << z << endl;
		}
	}
	catch (const exception& e)
	{
		 cout << "Exeptions olustu hata kodu " << e.what() << endl;
	}
	

}
