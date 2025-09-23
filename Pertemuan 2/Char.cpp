#include <iostream>
using namespace std;

int main()
// Array
{
	string y;
	char z[35];
	char x[40];
	
	cout << "Masukan NPM Anda: ";
	cin >> x;
	cin.ignore();
	cout << "Masukan Nama Anda : ";
	getline(cin, y);
	cout << "Masukan Alamat Anda : ";
	cin >> z;

	system("CLS");	
	cout << "NPM Anda adalah : " << x << endl;
	cout << "Nama Anda Adalah : " << y << endl;
	cout << "Alamat Anda Adalah : " << z << endl;
}
