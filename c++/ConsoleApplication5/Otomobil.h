#pragma once
#include <iostream>
using namespace std;
class Otomobil
{
public:
	Otomobil(string _model, string _renk, int _beygirGucu,int _ruhsatNo);
	~Otomobil();
	int beygirGucu;
	string model;
	string renk;

	void GetRuhsatNo();
	void SetRuhsatNo(int _ruhsatNo);


	void ruhsatBilgileriGoster();


private:
	int ruhsatNo;
};

