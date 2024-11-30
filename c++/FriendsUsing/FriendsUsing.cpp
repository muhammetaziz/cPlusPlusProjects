#include <iostream>
#include "Otomobil.h"
#include "Motor.h"
using namespace std;
 

int main()
{
	Otomobil oto("Camaro", 1500, 1975);
	Motor m;
	m.motorGucuOrtalama(oto);
	 
}
