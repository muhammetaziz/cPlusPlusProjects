#pragma once
#include <iostream>
using namespace std;
class Otomobil
{
public:
	Otomobil(string _model, string _renk, int _beygirGucu,int _ruhsatNo);
	~Otomobil();
	 
	int GetRuhsatNo();
	void SetRuhsatNo(int _ruhsatNo);

	string GetModel();
	void SetModel(string _model);

	string GetRenk();
	void SetRenk(string _renk);

	int GetBeygirGucu();
	void SetBeygirGucu(int _beygirGucu);

	void ruhsatBilgileriGoster();


private:
	string model;
	int beygirGucu;
	int ruhsatNo;
	string renk;
};

