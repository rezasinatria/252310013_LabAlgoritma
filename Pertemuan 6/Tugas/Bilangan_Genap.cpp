#include <iostream>

using namespace std;

int main() {
    int jumlah = 0; // Variabel untuk menyimpan hasil penjumlahan
    int bilanganGenap = 2; // Bilangan genap pertama
    int i; // Looping counter

    cout << "Deret: ";

    // Looping 10 kali untuk 10 suku
    for (i = 1; i <= 10; ++i) {
        jumlah += bilanganGenap; // Tambahkan bilangan genap ke total
        
        // Tampilkan bilangan dan simbol '+'
        cout << bilanganGenap;
        if (i < 10) {
            cout << " + ";
        }
        
        bilanganGenap += 2; // Naikkan ke bilangan genap berikutnya
    }

    cout << " = " << jumlah << endl;

    return 0;
}
