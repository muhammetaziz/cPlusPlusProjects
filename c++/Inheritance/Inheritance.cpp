#include <iostream>
using namespace std;
#include "Animal.h"
int main()
{
	Animal animal("Kedi");

	cout<<animal.getHayvanAd()<<endl;
	animal.setHayvanAd("Kopek");
	cout<<animal.getHayvanAd() << endl;
	animal.eat();
	animal.sleep();
}

