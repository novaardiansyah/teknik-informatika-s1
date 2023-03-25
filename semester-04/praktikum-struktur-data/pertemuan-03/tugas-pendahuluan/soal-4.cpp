#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
  string nama;
  int nilai[3];
};

int main() {
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  Mahasiswa mhs[2];

  for(int i = 0; i < 2; i++) {
    cout << "Masukkan nama mahasiswa " << i+1 << ": ";
    cin >> mhs[i].nama;

    for(int j = 0; j < 3; j++) {
      cout << "Masukkan nilai ke-" << j+1 << ": ";
      cin >> mhs[i].nilai[j];
    }
  }

  cout << endl;
  cout << "Data mahasiswa:" << endl;

  for(int i = 0; i < 2; i++) {
    cout << "Mahasiswa " << i+1 << ": " << mhs[i].nama << endl;
    cout << "Nilai: ";
    for(int j = 0; j < 3; j++) {
      cout << mhs[i].nilai[j] << " ";
    }
    cout << endl;
  }

  return 0;
}
