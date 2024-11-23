#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

//int main()
//{
//	int dizi[5] = { 8,9,5,6,7 };
//	array<int, 5>dizi2 = { 7,4,3,2,1 };
//	vector<int> dizi3;
//
//
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << dizi[i] << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < dizi2.size(); i++)
//	{
//		cout << dizi2[i] << endl;
//
//	}
//
//	int ekle;bool devam = true;
//	while (devam)
//	{
//		cout << "sayı gir" << endl;
//		cin >> ekle;
//		if (ekle != 0)
//		{
//			dizi3.push_back(ekle);
//		}
//		else {
//			cout << "baybay komutanım0" << endl;
//			devam = false;
//		}
//	}
//	for (int i = 0; i < dizi3.size(); i++)
//	{
//		cout << dizi3[i] << endl;
//
//	}
//
//
//
//
//}
 
int main() {

    int matris1[3][3];
    int matris2[3][3];
    int matris3[3][3];

    // Matris 1'in elemanlarını al
    cout << "Matris 1'in elemanlarini giriniz:\n";
    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 3; k++) {
            cout << i + 1 << ". satirin " << k + 1 << ". sutununun degerini giriniz: ";
            cin >> matris1[i][k];
        }
    }

    // Matris 2'nin elemanlarını al
    cout << "Matris 2'nin elemanlarini giriniz:\n";
    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 3; k++) {
            cout << i + 1 << ". satirin " << k + 1 << ". sutununun degerini giriniz: ";
            cin >> matris2[i][k];
        }
    }

    // Matris çarpımını yap
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matris3[i][j] = 0; // Çarpım sonucu matrisinin başlatılması
            for (int k = 0; k < 3; k++) {
                matris3[i][j] += matris1[i][k] * matris2[k][j];
            }
        }
    }

    // Sonuç matrisini ekrana yazdır
    cout << "Matris 1 ile Matris 2'nin carpimi (Matris 3):\n";
    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 3; k++) {
            cout << matris3[i][k] << " ";  // Elemanları boşlukla ayırarak yazdırıyoruz
        }
        cout << endl;  // Her satırdan sonra yeni satır başlatıyoruz
    }

    return 0;
}
