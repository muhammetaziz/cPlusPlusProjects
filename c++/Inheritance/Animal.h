#pragma once
#include <iostream>
using namespace std;
class Animal
{
public:
	Animal(string _ad);
	~Animal();
	string getHayvanAd();
	void setHayvanAd(string _ad);

	void eat();
	void sleep();
	virtual void sesCikar() { cout << "Hayvan Ses Cikar Fonksiyonu Cagirildi" << endl; }

	virtual void eviniGoster(string ev) { cout << "Hayvanlar bar�nakta yasar " <<ev<< endl; }


protected:
	//Sadecee ba�l� oldugu s�n�flar g�rebilir main metodu dahil ba�ka s�n�flar g�remez              
	string ad;
	string t�r;
};



