#include "Cat.h"


Cat::Cat(string ad) :Animal(ad) {
	//yapýlacak ak iþlemler de buraya yazýlacak
}

Cat::~Cat() {

}
void Cat::catchMouse() {
	cout << Animal::getHayvanAd() << " Fare Yakaliyor" << endl;
}
void Cat::eviniGoster(string ev) {
	cout << ad << " " << ev << " de yasýyor" << endl;
}
