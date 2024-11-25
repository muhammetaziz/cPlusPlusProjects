#include "Otomobil.h"

Otomobil::Otomobil(string _model, string _renk, int _beygirGucu, int _ruhsatNo) {
	model = _model;
	renk = _renk;
	beygirGucu = _beygirGucu;
	ruhsatNo = _ruhsatNo;
}
Otomobil::~Otomobil() {
}


void Otomobil::ruhsatBilgileriGoster() {
	cout << "Model: " << Otomobil::model << endl;
	cout << "Renk: " << Otomobil::renk << endl;
	cout << "Beygir: " << Otomobil::beygirGucu << endl;
}

void Otomobil::GetRuhsatNo() {
	cout << Otomobil::ruhsatNo << endl;
}

void Otomobil::SetRuhsatNo(int _ruhsatNo) {
	ruhsatNo = _ruhsatNo;
}
