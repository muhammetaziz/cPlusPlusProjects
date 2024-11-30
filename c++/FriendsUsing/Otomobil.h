#pragma once
#include <iostream>
#include "Motor.h"
using namespace std;
 


class Otomobil
{
private:
	int normalMotorGucu;
	int turboMotorGucu;
	string model;
public:
	Otomobil(string _model, int _normalMotorGucu, int _turboMotorGucu);
	friend class Motor;
};
