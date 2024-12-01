#include <iostream>
#include "Kare.h"
using namespace std;

class Complex
{
private:
	double real, imag;

public:
	Complex(double real = 0, double imag = 0) {
		this->real = real;
		this->imag = imag;
	}
	// + Operatoru asırı yukleme
	// c1+ c2=>c1.topla(c2)
	Complex operator+(const Complex& other) {
		return Complex(real + other.real, imag + other.imag);
	}
	//- Operatoru asırı yukleme
	Complex operator-(const Complex& other) {
		return Complex(real - other.real, imag - other.imag);
	}
	//* Operatoru asırı yukleme
	Complex operator*(const Complex& other) {
		return Complex(((real * other.real) + (real * other.imag)), ((imag * other.real) + (imag * other.imag)));
	}

	// << Operatoru asırı yukleme  cout<<c1<<endl;
	friend ostream& operator<<(ostream& os, const Complex& c) {
		os << c.real << "+" << c.imag << "i";
		return os;
	}
	void display() {
		cout << real << " + " << imag << "i" << endl;
		cout << endl;
	}
};



int main()
{
#pragma region Complex sınıfı maini

	//// 1 ve 2. nesnemizi toplayıp c3 uzerıne yazılıyor
	//Complex c1(1.9, 3.8);
	//Complex c2(7.8, 2.6);
	//Complex c3;

	//c3 = c1 + c2;
	//c3.display();

	//c3 = c1 - c2;
	//c3.display();

	//c3 = c1 * c2;
	//c3.display();

	//cout << c3;
#pragma endregion

#pragma region Kare Sınıfı Main fonksiyonu
	Kare k1(5);
	Kare k2(7);
	Kare k3;
	k3 = k1 + k2;
	k3 = k1 * k2;
	cout << k1 << endl;
	cout << k2 << endl;
	cout << k3 << endl;
#pragma endregion

}