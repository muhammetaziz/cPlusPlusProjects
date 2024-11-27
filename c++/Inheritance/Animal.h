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

private:
	string ad;
};

 

