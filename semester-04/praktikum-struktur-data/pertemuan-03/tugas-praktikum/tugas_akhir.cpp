#include <iostream>
#include <string>
using namespace std;

struct TANGGAL {
  int tanggal;
  int bulan;
  int tahun;
};

struct TINGGAL {
  string jalan;
  string kode_pos;
  string kota;
};

struct BIODATA {
  string nip;
  string nama;
  string alamat;
  string jabatan;
  string agama;
  TANGGAL tanggal_lahir;
  TANGGAL tanggal_mulai_kerja;
  TINGGAL unit_kerja;
};

int main() {
  const int MAX_PEGAWAI = 2;
  BIODATA pegawai[MAX_PEGAWAI];

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";
  
  int n;
  cout << "Masukkan jumlah pegawai: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "\nBiodata Pegawai " << i+1 << ":\n";
    
    cout << "NIP: ";
    cin >> pegawai[i].nip;
    
    cout << "Nama: ";
    cin >> pegawai[i].nama;

    cout << "Alamat: ";
    cin.ignore();
    getline(cin, pegawai[i].alamat);

    cout << "Jabatan: ";
    getline(cin, pegawai[i].jabatan);

    cout << "Agama: ";
    getline(cin, pegawai[i].agama);

    cout << "Tanggal Lahir (dd mm yyyy): ";
    cin >> pegawai[i].tanggal_lahir.tanggal >> pegawai[i].tanggal_lahir.bulan >> pegawai[i].tanggal_lahir.tahun;
    
    cout << "Tanggal Mulai Kerja (dd mm yyyy): ";
    cin >> pegawai[i].tanggal_mulai_kerja.tanggal >> pegawai[i].tanggal_mulai_kerja.bulan >> pegawai[i].tanggal_mulai_kerja.tahun;

    cout << "Unit Kerja:\n";
    cout << "Jalan: ";

    cin.ignore();
    getline(cin, pegawai[i].unit_kerja.jalan);

    cout << "Kode Pos: ";
    getline(cin, pegawai[i].unit_kerja.kode_pos);

    cout << "Kota: ";
    getline(cin, pegawai[i].unit_kerja.kota);
  }

  cout << "\nData Pegawai:\n";
  for (int i = 0; i < n; i++) {
    cout << "\nBiodata Pegawai " << i+1 << ":\n";
    cout << "NIP: " << pegawai[i].nip << endl;
    cout << "Nama: " << pegawai[i].nama << endl;
    cout << "Alamat: " << pegawai[i].alamat << endl;
    cout << "Jabatan: " << pegawai[i].jabatan << endl;
    cout << "Agama: " << pegawai[i].agama << endl;
    cout << "Tanggal Lahir: " << pegawai[i].tanggal_lahir.tanggal << "/" << pegawai[i].tanggal_lahir.bulan << "/" << pegawai[i].tanggal_lahir.tahun << endl;
    cout << "Tanggal Mulai Kerja: " << pegawai[i].tanggal_mulai_kerja.tanggal << "/" << pegawai[i].tanggal_mulai_kerja.bulan << "/" << pegawai[i].tanggal_mulai_kerja.tahun << endl;

    cout << "Unit Kerja:\n";
    cout << "Jalan: " << pegawai[i].unit_kerja.jalan << endl;
    cout << "Kode Pos: " << pegawai[i].unit_kerja.kode_pos << endl;
    cout << "Kota: " << pegawai[i].unit_kerja.kota << endl;
  }

  return 0;
}
