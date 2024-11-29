#include <iostream>
#include "Otomobil.h"
using namespace std;

void bilgilerNerede(Otomobil oto) {
	cout << oto.yil << " " <<oto.marka<<endl ;
}


int main()
{
	Otomobil oto("Volvo", 2024);
	oto.bilgileriGoster();
	bilgilerNerede(oto);
}
