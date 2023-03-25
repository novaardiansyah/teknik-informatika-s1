#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
  string nama;
  int usia;
  float ipk;
};

int main() {
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  Mahasiswa mhs1;
  mhs1.nama = "Nova Ardiansyah";
  mhs1.usia = 22;
  mhs1.ipk  = 3.85;

  cout << "Nama\t: " << mhs1.nama << endl;
  cout << "Usia\t: " << mhs1.usia << endl;
  cout << "IPK\t: " << mhs1.ipk << endl;

  return 0;
}
