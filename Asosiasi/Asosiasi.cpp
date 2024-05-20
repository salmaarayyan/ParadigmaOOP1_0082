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

void Pasien::cetakDokter() {
	cout << "Daftar Dokter yang menangani pasien\"" << this->nama << "\":\n";
	for (auto& a : daftar_dokter) { //auto digunakan dalam perulangan for untuk secara otomatis menentukan tipe data dari elemen yang diitera}
		cout << a->nama << "\n";
	}
	cout << endl;
}

void Dokter::tambahPasien(Pasien* pPasien) {
    daftar_pasien.push_back(pPasien);
    pPasien->tambahDokter(this);
}