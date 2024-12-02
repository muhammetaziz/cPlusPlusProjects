#include <iostream>
#include <list>
using namespace std;

void printList(list<int> l) {
	list<int>::iterator itr;
	for (itr=l.begin();itr!=l.end();itr++)
	{
		cout << *itr<<", ";
	}
	cout << endl;
}
int main()
{ 
	list<int> liste;

	liste.push_back(7);
	liste.push_back(4);
	liste.push_back(9);
	liste.push_back(2);
	liste.push_back(13);
	liste.push_back(15);
	liste.push_front(16);

	printList(liste);
	liste.pop_back();
	printList(liste);
	
	list<int>::iterator it;

	it = liste.begin();
	it++;
	it++;
	liste.insert(it, 87);
	printList(liste);


}
