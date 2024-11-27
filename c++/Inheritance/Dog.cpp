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
	cout << Animal::tür << endl;
}

int Dog::karesiniHesapla(int x) {
	return (x * x);
}
