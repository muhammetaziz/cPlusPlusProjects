#pragma once
#include<iostream>
#include"Animal.h"
class Bird:public Animal
{
public:
	Bird(string ad);
	~Bird();

	void birdFlying();

private:

};
