#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
	fstream file;
	//out dosyaya yazı yazmak için. binary farklı türde dosyaları yazmak icin. app dosyayı bosaltıp en sonuna islem yapar
	file.open("E:\\deneme.txt", ios::in | ios::binary | ios::app);// okumak için in yazmak için out

	if (!file.is_open())    //açılamadıysa
	{
		cout << "Dosya acilamadi" << endl;
	}
	else
	{
		string str;
		while (getline(file, str))									//Her satırı okumak için while döngüsü kullanılması lazım aksi taktirde tek satır okur
		{
			cout << str<<endl;
		}

		file.close();
	}


	cout << endl;
}
