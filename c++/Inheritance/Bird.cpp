#include "Bird.h"


Bird::Bird(string ad) :Animal(ad) {
	//yapýlacak iþlemler
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
	cout << ad << " " << ev << " de yasýyor" << endl;
}