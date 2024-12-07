#pragma once
#include <iostream>
using namespace std;

class Bank
{
private:
	string name;
	string surname;
	double balance;
	int ID;


public:
	Bank(string name, string surname, double balance, int ID);
	void paraYatirma();
	void paraCekme();
	void hesapBilgileriniGoster();

};
