#include <iostream>
#include "Bank.h"
using namespace std;



Bank::Bank(string name, string surname, double balance, int ID) {
	this->name = name;
	this->surname = surname;
	this->balance = balance;
	this->ID = ID;
}

void Bank::paraYatirma() {
	double money;
	cout << "Yatirmak istediginiz tutar� giriniz:  ";
	cin >> money;
	balance = balance + money;
	cout << "Yeni bakiyeniz: " << balance << endl;
	cout << "ANA MENUYE YONLENDIRILIYORSUNUZ" << endl;
}
void Bank::paraCekme() {
	double money;
	cout << "Cekmek istediginiz tutar� giriniz:  ";
	cin >> money;
	if (money > balance)
	{
		cout << "Uzgunuz...Bakiyeniz yeterli degil. " << endl;
	}
	else if (true)
	{
		balance = balance - money;
		cout << "Yeni bakiyeniz: " << balance << endl;
		cout << "ANA MENUYE YONLENDIRILIYORSUNUZ" << endl;
	}
}
void Bank::hesapBilgileriniGoster() {
	cout << "Hesap numaran�z: " << ID << " Hesap sahibi: " << name << " " << surname << " Bakiye: " << balance << endl;
}