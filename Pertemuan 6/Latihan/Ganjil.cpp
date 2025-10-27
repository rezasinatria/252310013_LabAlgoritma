#include <iostream>
using namespace std;

int main() {
    int angka[10];

    cout << "Masukkan 10 bilangan:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Nilai ke-" << i + 1 << " : ";
        cin >> angka[i];
    }

    cout << "\nBilangan Genap: ";
    for (int i = 0; i < 10; i++) {
        if (angka[i] % 2 == 0) {
            cout << angka[i] << " ";
        }
        else {
        cout << "\nBilangan Ganjil: ";
	   	 for (int i = 0; i < 10; i++) {
	   	 if (angka[i] % 2 != 0) {
	    cout << angka[i] << " ";
        }
    }
		}
    }


    cout << endl;
    return 0;
}

