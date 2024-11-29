#include "Bird.h"


Bird::Bird(string ad) :Animal(ad) {
	//yap�lacak i�lemler
}
Bird::~Bird() {
	//destructor
}

void Bird::birdFlying() {
	cout << Animal::getHayvanAd() << " isimli hayvan ucuyor" << endl;
}

void Bird::sesCikar() {
	cout << "Cik Cik Cik" << endl;
}
void Bird::eviniGoster(string ev) {
	cout << ad << " " << ev << " de yas�yor" << endl;
}