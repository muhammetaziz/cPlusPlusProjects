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

	//Sadecee ba�l� oldugu s�n�flar g�rebilir main metodu dahil ba�ka s�n�flar g�remez              
protected:
	string ad;
	string t�r;
};



