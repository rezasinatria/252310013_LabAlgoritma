#include <iostream>
#include <iomanip> // Diperlukan untuk mengatur lebar output (setw)

using namespace std;

int main() {
    // Inisialisasi variabel
    int a = 3, b = 2, c = 1, bil;

    // Output Header
    cout << "Bil-A | Bil-B | Bil-C\n";
    cout << "---------------------\n";

    // Perulangan FOR
    for (bil = 1; bil <= 10; ++bil) {
        // Proses perhitungan
        a += b;
        b += c;
        c += 2;

        // Output data dengan format rapi (menggunakan setw)
        cout << setw(5) << a << " |"
             << setw(5) << b << " |"
             << setw(5) << c << endl;

        // Kondisi break: program berhenti jika c sama dengan 13
        if (c == 13) {
            break;
        }
    }

    return 0;
}
