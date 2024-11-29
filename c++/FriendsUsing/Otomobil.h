#pragma once
#include <iostream>
#include "Motor.h"
using namespace std;


class Otomobil
{
public:
	int yil;
	Otomobil(string _marka,int _yil) {
		marka = _marka;
		yil = _yil;
	}

	void bilgileriGoster();
	
	friend void bilgilerNerede(Otomobil oto);

private:
	string marka;
};

