#include "Cat.h"


Cat::Cat(string ad) :Animal(ad) {
	//yap�lacak ak i�lemler de buraya yaz�lacak
}

Cat::~Cat() {

}
void Cat::catchMouse() {
	cout << Animal::getHayvanAd() << " Fare Yakaliyor" << endl;
}
void Cat::eviniGoster(string ev) {
	cout << ad << " " << ev << " de yas�yor" << endl;
}
