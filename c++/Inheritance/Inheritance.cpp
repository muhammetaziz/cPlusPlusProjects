#include <iostream>
using namespace std;
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Bird.h"
int main()
{
	Cat kedi("tekir");
	Dog kopek("Garip");
	Bird kus("Boncuk");

	kedi.eat();
	kedi.sleep();
	kedi.catchMouse();
	
	cout << endl;

	kopek.eat();
	kopek.sleep();
	kopek.dogBarking();

	cout << endl;
	
	kus.eat();
	kus.sleep();
	kus.birdFlying();
}

