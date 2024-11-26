#include <iostream>
#include "Otomobil.h"
using namespace std;
 
int main()
{
	Otomobil otomobil1("Camaro", "Mavi", 1400, rand()), otomobil2("Skoda", "Pembe", 780, rand()); 
	
	otomobil1.SetRuhsatNo(14);
	otomobil2.SetRuhsatNo(799);

	Otomobil* ptr = &otomobil1;

	ptr->ruhsatBilgileriGoster();
	
	Otomobil* ptr2 = new Otomobil("Mcleren", "Beyaz", 7000, rand());


	ptr2->ruhsatBilgileriGoster(); 

	cout << endl;

	//Pointerlar ile olusturulan siniflari mutlaka delete yapın.
	delete ptr2; 
}
