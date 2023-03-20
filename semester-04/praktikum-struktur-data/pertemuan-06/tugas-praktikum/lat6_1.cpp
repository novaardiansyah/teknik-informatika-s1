#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int Nilai[15];
  int i, N, angka, Bilangan;

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

  i = 0;
  do {
    if (Nilai[i] == Bilangan) angka = i;
    i++;
  } while (i < N);

  if (Nilai[angka] == Bilangan) {
    cout << "Data ditemukan pada indeks ke-" << angka << endl;
  } else {
    cout << "Data tidak ditemukan" << endl;
  }
}
