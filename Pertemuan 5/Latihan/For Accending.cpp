#include <iostream>
using namespace std;

int main()
{
	int awal, akhir;
	
	cout << "Mulai dari = ";
	cin >> awal;
	
	cout << "Berakhir di = ";
	cin >> akhir;
	
	for(int a = awal; a <= akhir; a++){
		cout << "Percobaan Ke " << a << endl;
	}
}
