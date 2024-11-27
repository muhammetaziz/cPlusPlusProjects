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