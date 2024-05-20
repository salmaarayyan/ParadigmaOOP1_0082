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

class Dokter {
public:
	string nama;
	vector<Pasien*> daftar_pasien;
	Dokter(string pNama) :nama(pNama) {
		cout << "Dokter\"" << nama << "\" ada\n";
	}
	~Dokter() {
		cout << "Dokter \"" << nama << "\" tidak ada\n";
	}
	void tambahPasien(Pasien*);
	void cetakPasien();

};

void Pasien::tambahDokter(Dokter* pDokter) {
	daftar_dokter.push_back(pDokter);
}