#include <iostream>
#include <vector>
using namespace std;

class Dokter;
class Pasien { //asosiasi
public:
	string nama;
	vector<Dokter*> daftar_dokter;
	Pasien(string pNama) :nama(pNama) {
		cout << "Pasien\"" << nama << "\" ada\n";
	}
	~Pasien() {
		cout << "Pasien\"" << nama << "\" tidak ada\n";
	}
	void tambahDokter(Dokter*);
	void cetakDokter();

};