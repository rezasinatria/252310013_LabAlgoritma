#include <iostream>
using namespace std;

int main()
{
	int a,b;
	
	//nested for
	for (a = 1; a <= 5; a++){
		cout << endl;
		for (b = a; b <= 5; b++){
			cout << a << "";
		}
	}
}
