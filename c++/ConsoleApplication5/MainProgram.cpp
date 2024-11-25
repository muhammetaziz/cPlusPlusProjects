#include <iostream>
#include "Otomobil.h"
using namespace std;
 
int main()
{
	Otomobil otomobil1("Camaro", "Mavi", 1400, rand()), otomobil2("Skoda", "Pembe", 780, rand());
	Otomobil otomobil3("Camaro", "Mavi", 1400, rand()), otomobil4("Skoda", "Pembe", 780, rand());
	otomobil1.SetRuhsatNo(14);
	otomobil2.SetRuhsatNo(799);

	otomobil1.ruhsatBilgileriGoster();
	cout << endl;
	otomobil2.ruhsatBilgileriGoster();

	cout << endl;
	cout << endl;
	otomobil1.GetRuhsatNo();
	otomobil2.GetRuhsatNo();
	
}
