#include <iostream>
using namespace std;

void ucgen() {
	int t, h;
	cout << "Taban degerini giriniz  " << endl;
	cin >> t;
	cout << "Yukseklik degerini giriniz  " << endl;
	cin >> h;
	cout << (t * h) / 2 << endl;
}
void kare() {
	int k;
	cout << "Bir kenar uzunlugunu giriniz" << endl;
	cin >> k;
	cout << k * k << endl;
}
void dikdörtgen() {
	int k, u;
	cout << "Kısa kenar ve uzun kenari giriniz" << endl;
	cin >> k;
	cout << "Uzun kenari giriniz" << endl;
	cin >> u;
	cout << k * u << endl;
}
void daire() {
	int r;
	cout << "Yaricapi giriniz" << endl;
	cin >> r;
	float pi = 3.141592f;
	cout << pi * pow(r, 2) << endl;
}
int main()
{
	int islem = 0;
	bool devam = true;
	while (devam)
	{
		cout << "Islem seciniz (Ucgen:1 Kare:2 Dikdortgen:3 Daire:4 Cikis:0)" << endl;
		cin >> islem;
		switch (islem)
		{
		case 1: {
			ucgen();
			break;
		}case 2: {
			kare();
			break;
		}
		case 3: {
			dikdörtgen();
			break;
		}
		case 4: {
			daire();
			break;
		}
		case 0: {
			cout << "Hoşçakalin" << endl;
			devam = false;
			break;
		}
		default: {
			cout << "Geçersiz işlem" << endl;
			break;
		}
		}
	}
	return 0;

}
