#include <iostream>
using namespace std;

class Olasılık
{
public:
	void setSayi(int sayı) {
		this->sayı = sayı;
	}
	int getSayi() {
		return sayı;
	}
private:
	int sayı;
	string konum;

};


int main()
{
	Olasılık ol;
	cout<<ol.getSayi() << endl;
	ol.setSayi(12);
	cout<<ol.getSayi() << endl;
}