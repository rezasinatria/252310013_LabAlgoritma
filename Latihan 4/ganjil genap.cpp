#include <iostream>
using namespace std;

int main()
{
	int angka;
	
	cout << "Masukan angka : ";
	cin >> angka;
	
	if(angka % 2 == 0){
		cout << "Angka ini merupakan angka genap";
	}
	else{
		cout << "Angka ini merupakan angka ganjil";
	}
	
}
