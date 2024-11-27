#include <iostream>
#include "Otomobil.h"
using namespace std;

int main()
{
	Otomobil otomobil1("Camaro", "Mavi", 1400, rand(), 4), otomobil2("Skoda", "Pembe", 780, rand(), 2);

	otomobil1.SetRuhsatNo(14);
	otomobil2.SetRuhsatNo(799);

	Otomobil* ptr = &otomobil1;

	ptr->ruhsatBilgileriGoster();

	Otomobil* ptr2 = new Otomobil("Mcleren", "Beyaz", 7000, rand(), 5);
	//pointer öğeye erişme
	cout << *otomobil1.pKapiSayisi << endl;;
	//pointerla oluşturukmus nesneden pointer öğeye erişme
	cout << *ptr->pKapiSayisi << endl;
	ptr2->ruhsatBilgileriGoster();

	cout << endl;

	//Pointerlar ile olusturulan siniflari mutlaka delete yapın.
	delete ptr2;
}
