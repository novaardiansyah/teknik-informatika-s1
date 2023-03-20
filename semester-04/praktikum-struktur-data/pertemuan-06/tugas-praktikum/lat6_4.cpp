#include <iostream>
#include <string>
using namespace std;

// * Struct Declaration
struct Pegawai {
  string NIP;
  string Nama;
  string Alamat;
  string Agama;
  string Jabatan;
};

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  const int MAX_PEGAWAI = 10;
  Pegawai daftar_pegawai[MAX_PEGAWAI]; // * Array of struct

  int n;
  string nip_cari;
  bool found = false;

  cout << "Masukkan jumlah pegawai: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Pegawai ke-" << i+1 << endl;
    cout << "NIP\t: ";
    cin >> daftar_pegawai[i].NIP;

    cout << "Nama\t: ";
    cin.ignore();
    getline(cin, daftar_pegawai[i].Nama);

    cout << "Alamat\t: ";
    getline(cin, daftar_pegawai[i].Alamat);
    
    cout << "Agama\t: ";
    getline(cin, daftar_pegawai[i].Agama);
    
    cout << "Jabatan\t: ";
    getline(cin, daftar_pegawai[i].Jabatan);

    cout << endl;
  }

  // * Sequential search
  cout << "Masukkan NIP pegawai yang ingin dicari: ";
  cin >> nip_cari;
  
  for (int i = 0; i < n; i++) {
    if (daftar_pegawai[i].NIP == nip_cari) {
      found = true;
      cout << "Biodata Pegawai dengan NIP " << nip_cari << endl;
      cout << "Nama\t: " << daftar_pegawai[i].Nama << endl;
      cout << "Alamat\t: " << daftar_pegawai[i].Alamat << endl;
      cout << "Agama\t: " << daftar_pegawai[i].Agama << endl;
      cout << "Jabatan\t: " << daftar_pegawai[i].Jabatan << endl;
      break;
    }
  }

  if (!found) {
    cout << "Pegawai dengan NIP " << nip_cari << " tidak ditemukan" << endl;
  }

  return 0;
}
