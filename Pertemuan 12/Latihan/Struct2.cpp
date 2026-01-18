#include <iostream>
using namespace std;

int main()
{
	struct mahasiswa
	{
		char nim[9];
		char nama[15];
		float nilai;
	};
	
	mahasiswa mahasiswa;
	
	cout << "Masukan Nim : ";
	cin >> mahasiswa.nim;
	cout << "Masukan Nama : ";
	cin >> mahasiswa.nama;
	cout << "Masukan Nilai Akhir : ";
	cin >> mahasiswa.nilai;
	cout << "\nData yang diinput adalah : \n\n";
	cout << "Nim : " << mahasiswa.nim << endl;
	cout << "Nama : " << mahasiswa.nama << endl;
	cout << "Nilai Akhir : " << mahasiswa.nilai << endl;
}

struct siswa
{
	int no_induk;
	string nama;
	float nilai;
};

int main(){
	siswa Arkan, Lukas;
	Arkan.no_induk = 1;
	Arkan.nama = "Arkan Jauhary"
	Arkan.nilai = 75.5;
	Lukas.no_induk = 2;
	lukas.nama = "Lukas faherza";
	lukas.nilai = 89.9;
	
	cout << Arkan.nama << " Dengan Nomor Induk " << Arkan.no_induk << "Mendapatkan nilai " << Arkan.nilai << endl;
	cout << Lukas.nama << "Dengan Nomot Induk " << Lukas.no_induk << "Mendapatkan Nilai " << Lukas.nilai << endl;
}

struct siswa
{
	int no_induk;
	string nama;
	float nilai;
};

int main(){
	Siswa Jery = {1, "Jery January", 85.5};
	siswa tono = {2, "Tono Laksono", 89.9};
	cout << Jery.nama << "Mendapatkan Nilai" << Jery.nilai << endl;
	cout << tono.nama << "Mendaptkab Nilai" << tono.nilai << endl;
	return 0;

}

struct datamahasiswa
{
	string nama, npm, jurusan;
};

struct nilai
{
	float nilai_1, nilai_2;
};

struct
{
	datamahasiswa data;
	nilai Nilai;
}mahasiswa;

int main(){
	cout << "Masukan Nama Mahasiswa : ";
	getline(cin, mahasiswa.data.nama)
	
	cout << "Masukan NPM Mahasiswa : ";
	cin >> mahasiswa.data.npm;
	
	cout << "Masukan Jurusan Mahasiswa : ";
	cin >> mahasiswa.data.jurusan;
	
	cout << "Masukan Nilai 1 : ";
	cin >> mahasiswa.Nilai.nilai_1;
	
	cout << mahasiswa.data.nama << ' ' << mahasiswa.data.npm << ' ' << mahasiswa.data.jurusan << ' ' << mahasiswa.Nilai.nilai_1;
	
	retrun 0;
}

struct Calculator
{
	int add(int num1, int num2)
	{
		return num1 + num2;
	}
	int multiply(int num1, int num2){
		return num1 * num2;
	}
	
	
};

int main(){
	Calculator calculator;
	int num1, num2;
	
	cout << "Enter frist number : ";
	cin >> num1;
	
	cout << "Enter Second number : ";
	cin >> num2;
	
	cout << num1 << " + " << num2 << " = " << calculator.add(num1, num2) << endl;
	cout << num1 << " * " << num2 << " = " << calculator.multiply(num1, num2) << endl;
}
