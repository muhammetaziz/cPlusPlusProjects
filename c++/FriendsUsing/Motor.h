#pragma once
#include <iostream>
#include "Otomobil.h"
using namespace std; 



class Motor
{
public:
	void motorGucuOrtalama(Otomobil otomobil1) {
		int ortalama = (otomobil1.normalMotorGucu + otomobil1.turboMotorGucu) / 2;
		cout << otomobil1.model << " modelindeki araban�n ortalama motor gucu:  " << ortalama << endl;
	}
};

 