#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	
	cout << "Nilai Awal A = " << a << endl;
	
	// Pre-incerment : a ditambah dulu, lalu ditampilkan
	cout << "Pre-incerment >> ++a = " << ++a << endl;
	
	// Post-incerment : nilai lama ditampilkan dulu lalu ditambah dan ditampilkan
	cout << "Post-incerment >> a++ = " << a++ <<  " Sekarang A = " << a << endl;
	
	// Pre-decrement a dikurangi dulu, lalu ditampilkan
	cout << "Pre-decrement >> --a = " << --a << endl;
	
	// Pos-decrement nilai lama ditampilkan dulu lalu dikurang dan bisa ditampilkan
	cout << "Pos-decrement >> a-- = " << a-- <<  " Sekarang A = " << a << endl;
	
}
