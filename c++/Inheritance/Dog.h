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
	void sesCikar();
	void eviniGoster(string ev);

protected:
	static int kopekSayisi;
};
