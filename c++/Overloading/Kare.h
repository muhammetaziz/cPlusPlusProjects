#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Kare
{
private:
	int kenarUzunlugu;

public:
	Kare(int kenarUzunlugu = 0) {
		this->kenarUzunlugu = kenarUzunlugu;
	}

	void goster() {
		cout << kenarUzunlugu << endl;
	}
	friend ostream& operator<<(ostream& os, const Kare& c) {
		cout << "Karenizin 1 kenarinin uzunlugu:" << c.kenarUzunlugu << endl;
		os << "Karenin kenar uzunluklarý toplamý: " << c.kenarUzunlugu * 4 << endl;
		os << "Karenin alani: " <<  c.kenarUzunlugu*c.kenarUzunlugu  << endl;
		cout << endl;
		return os;
	}
	Kare operator+(const Kare& other) {
		return kenarUzunlugu + other.kenarUzunlugu;
	}
	Kare operator*(const Kare& other) {
		return kenarUzunlugu * other.kenarUzunlugu;
	} 
};

