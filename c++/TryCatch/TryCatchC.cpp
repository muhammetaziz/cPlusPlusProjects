#include <iostream>
#include "TryCatch.h"
using namespace std;

HataSinifi::HataSinifi(string hataMesaji) {
	this->hataMesaji = hataMesaji;
}

string HataSinifi::getHataMesaji() {
	return hataMesaji;
}