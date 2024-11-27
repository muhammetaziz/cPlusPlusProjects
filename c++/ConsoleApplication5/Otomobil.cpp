#include "Otomobil.h"

Otomobil::Otomobil(string _model, string _renk, int _beygirGucu, int _ruhsatNo, int _kapiSayisi) {
	model = _model;
	renk = _renk;
	beygirGucu = _beygirGucu;
	ruhsatNo = _ruhsatNo;
	pKapiSayisi = new int(_kapiSayisi);

	cout << Otomobil::model << " Objesinin Constructoru cagirildi" << endl;
}
Otomobil::~Otomobil() {
	cout << Otomobil::model << " Objesinin Destructoru cagirildi" << endl;
	delete pKapiSayisi;
}


void Otomobil::ruhsatBilgileriGoster() {
	cout << "Model: " << Otomobil::model << endl;
	cout << "Renk: " << Otomobil::renk << endl;
	cout << "Beygir: " << Otomobil::beygirGucu << endl;
}



int Otomobil::GetRuhsatNo() { return ruhsatNo; }
void Otomobil::SetRuhsatNo(int _ruhsatNo) { ruhsatNo = _ruhsatNo; }

string Otomobil::GetModel() { return model; }
void Otomobil::SetModel(string _model) { model = _model; }

string Otomobil::GetRenk() { return renk; }
void Otomobil::SetRenk(string _renk) { renk = _renk; }

int Otomobil::GetBeygirGucu() { return beygirGucu; }
void Otomobil::SetBeygirGucu(int _beygirGucu) { beygirGucu = _beygirGucu; }