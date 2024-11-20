#include <iostream>
using namespace std;

void getNumbers(float& firstNum, float& secondNum) {
	cout << "Birinci sayıyı giriniz: ";
	cin >> firstNum;
	cout << "İkinci sayıyı giriniz: ";
	cin >> secondNum;
}

void performOperation(int operation, float firstNum, float secondNum) {
	switch (operation) {
	case 1: {
		cout << "Sonuç: " << firstNum + secondNum << endl;
		break;
	}
	case 2: {
		cout << "Sonuç: " << firstNum - secondNum << endl;
		break;
	}
	case 3: {
		cout << "Sonuç: " << firstNum * secondNum << endl;
		break;
	}
	case 4: {
		if (secondNum != 0) {
			cout << "Sonuç: " << firstNum / secondNum << endl;
		}
		else {
			cout << "Hata: Sıfıra bölme hatası!" << endl;
		}
		break;
	}
	case 0: {
		cout << "Çıkış yapılıyor..." << endl;
		break;
	}
	default: {
		cout << "Yanlış işlem seçtiniz. Lütfen geçerli bir seçenek giriniz!" << endl;
	}
	}
}

int main() {
	int islem;
	float firsNum = 0, secondNum = 0;
	bool isNext = true;

	while (isNext) {
		cout << "\nYapmak istediğiniz işlemi giriniz:\n"
			<< "Toplama: 1, Çıkarma: 2, Çarpma: 3, Bölme: 4, Çıkış: 0" << endl;
		cin >> islem;

		if (islem == 0) {
			isNext = false;
		}
		else {
			getNumbers(firsNum, secondNum);
			performOperation(islem, firsNum, secondNum);
		}
	}

	cout << "İyi günler dileriz!" << endl;
	return 0;
}
