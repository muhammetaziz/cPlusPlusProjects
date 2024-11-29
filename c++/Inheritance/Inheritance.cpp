#include <iostream>
using namespace std;
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Bird.h"



int main()
{
	Animal* hayvan;
	Cat kedi("Tekir");
	Dog kopek("Garip");
	Bird kus("Boncuk");

	//animal sınıfından olusturulan pointer kedi sınıfından olusturulan nesneye atanıyor ve kedi sınıfındakı fonksiyonu cagırıyor. Böyle olmasaydı kendi fonksiyonunu cagırırdı
	hayvan = &kedi;
	hayvan->sesCikar();
	hayvan->eviniGoster("Koli ");
	 
	hayvan = &kopek;
	hayvan->eviniGoster("Kulube ");

	hayvan = &kus;
	hayvan->eviniGoster("Kafes ");

}

