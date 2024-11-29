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

	virtual void eviniGoster(string ev) { cout << "Hayvanlar barýnakta yasar " <<ev<< endl; }


protected:
	//Sadecee baðlý oldugu sýnýflar görebilir main metodu dahil baþka sýnýflar göremez              
	string ad;
	string tür;
};



