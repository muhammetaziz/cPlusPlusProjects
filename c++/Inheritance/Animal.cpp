#include "Animal.h"
 
Animal::Animal(string _ad) {
	 
	ad = _ad;
}
Animal::~Animal() {
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