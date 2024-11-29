#pragma once
#include<iostream>
#include"Animal.h"
#include "Cat.h"
using namespace std;


class Cat :public Animal
{
public:
	Cat(string ad);
	~Cat();

	void catchMouse();
	void sesCikar() {
		cout << "Miyaw Miyaw Nigga" << endl;
	}
	void eviniGoster(string ev);
private:

};


