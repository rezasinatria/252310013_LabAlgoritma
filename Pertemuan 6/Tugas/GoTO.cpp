// -------------------------//
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a, b;
	char lagi;
	cout << "Program dengan pernyataan goto" << endl;
	
	do {
		system("cls");
		cout << "Masukan Bilangan = ";
		cin >> a;
		
		b = a % 2;
		cout << "Nilai " << a <<  " % 2 Adalah : " << b << endl;
		
		cout << "\ningin Hitung lagi [Y/T] : ";
		lagi = getche();
		
	}
	while(lagi == 'y' || lagi == 'Y');
	return 0;
	
}
