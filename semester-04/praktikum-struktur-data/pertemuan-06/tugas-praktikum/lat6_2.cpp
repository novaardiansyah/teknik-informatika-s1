#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int Nilai[15];
  int Posisi[15];
  int i, N, angka, Bilangan, Banyak = 0;
  bool ketemu;

  cout << "Masukkan banyaknya data : ";
  cin >> N;

  for (i = 0; i < N; i++) {
    cout << "Masukkan data ke-" << i + 1 << " : ";
    cin >> Nilai[i];
  }

  cout << "Data yang telah dimasukkan adalah : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }

  cout << "\nMasukkan nilai yang akan dicari : ";
  cin >> Bilangan;

  for (i = 0; i < N; i++) {
    if (Nilai[i] == Bilangan) {
      ketemu = true;
      Posisi[Banyak] = i;
      Banyak++;
    }
  }

  if (ketemu) {
    cout << "Data ditemukan pada indeks ";
    for (i = 0; i < Banyak; i++) {
      cout << "ke-" << Posisi[i] << " ";
    }
    cout << "\nBanyaknya data yang ditemukan: " << Banyak << endl;
  } else {
    cout << "Data tidak ditemukan" << endl;
  }
}
