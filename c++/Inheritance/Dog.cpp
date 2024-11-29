#include "Dog.h"
int Dog::kopekSayisi = 0;
Dog::Dog(string ad):Animal(ad) {
	//yapýlacak iþlemler
	kopekSayisi++;
}
Dog::~Dog() {
	//yapýlacak iþlemler
	kopekSayisi--;
}
void Dog::dogBarking() {
	cout << Animal::getHayvanAd() << " isimli hayvan havlýyor"<<endl;
	Animal::tür="Kopek";
	cout << Animal::tür <<"  HAW HAW" << endl;
}

int Dog::karesiniHesapla(int x) {
	return (x * x);
}
void Dog::sesCikar() {
	cout << "Haw Lan HAW" << endl;
}
void Dog::eviniGoster(string ev) {
	cout << ad << " " << ev << " de yasýyor" << endl;
}