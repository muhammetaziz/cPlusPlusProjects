#pragma once
#include<iostream> 
#include"Animal.h" 
using namespace std;


class Dog:public Animal
{
public:
	Dog(string ad);
	~Dog();
	
	void dogBarking();
	static int getKopekSayisi() {
		return kopekSayisi;
	}
	static int karesiniHesapla(int x);
protected:
	static int kopekSayisi;
};
