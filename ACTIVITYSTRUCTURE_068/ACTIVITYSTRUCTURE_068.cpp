#include <iostream>
using namespace std;

struct mahasiswa
{
	string nim;
	string nama;
	string alamat;
	int umur;
};  


int main() {
	mahasiswa mhs, mhs2;

	mhs.nim = "20220140068";
	mhs.umur = 19;
	mhs.nama = "Fauzan Althaf Rianto";
	mhs.alamat = "Bandung";

	cout << "masukan NIM : ";
	cin >> mhs2.nim;
	cout << "Masukan Umur : ";
	cin >> mhs2.umur;
	cout << "Masukan Nama : ";
	cin >> mhs2.nama;
	cout << "Masukan Alamat : ";
	cin >> mhs2.alamat;

	cout << "NIM :" << mhs.nim;
	cout << "\nUmur : " << mhs.umur;
	cout << "\nNama : " << mhs.nama;
	cout << "\nAlamat : " << mhs.alamat;

	cout << "\n\nNIM : " << mhs2.nim;
	cout << "\n\nUmur : " << mhs2.umur;
	cout << "\n\nNama : " << mhs2.nama;
	cout << "\n\nAlamat : " << mhs2.alamat;



}
