#include "Dog.h"
int Dog::kopekSayisi = 0;
Dog::Dog(string ad):Animal(ad) {
	//yap�lacak i�lemler
	kopekSayisi++;
}
Dog::~Dog() {
	//yap�lacak i�lemler
	kopekSayisi--;
}
void Dog::dogBarking() {
	cout << Animal::getHayvanAd() << " isimli hayvan havl�yor"<<endl;
	Animal::t�r="Kopek";
	cout << Animal::t�r <<"  HAW HAW" << endl;
}

int Dog::karesiniHesapla(int x) {
	return (x * x);
}
void Dog::sesCikar() {
	cout << "Haw Lan HAW" << endl;
}
void Dog::eviniGoster(string ev) {
	cout << ad << " " << ev << " de yas�yor" << endl;
}