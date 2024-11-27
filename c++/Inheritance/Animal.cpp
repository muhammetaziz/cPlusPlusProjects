#include "Animal.h"
 
Animal::Animal(string _ad) {
	cout << "Hayvan constructoru olustu" << endl;
	ad = _ad;
}
Animal::~Animal() {
	cout << "Hayvan destructoru calisti" << endl;
}

void Animal::eat() {
	cout << ad << " Besleniyor" << endl;
}

void Animal::sleep() {
	cout << ad << " Uyuyor" << endl; 
} 

string Animal::getHayvanAd() {
	return ad;
}
void Animal::setHayvanAd(string _ad) {
	ad = _ad;
}