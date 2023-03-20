#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int Nilai[15];
  int i, j, N;
  int temp, awal, akhir, tengah, Bilangan;

  cout << "Masukkan banyaknya data : ";
  cin >> N;

  for (i = 0; i < N; i++) {
    cout << "Masukkan data ke-" << i + 1 << " : ";
    cin >> Nilai[i];
  }

  cout << "Data sebelum diurutkan : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }

  for (i = 0; i < N - 1; i++) {
    for (j = i + 1; j < N; j++) {
      if (Nilai[i] > Nilai[j]) {
        temp = Nilai[i];
        Nilai[i] = Nilai[j];
        Nilai[j] = temp;
      }
    }
  }

  cout << "\nData setelah diurutkan : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }

  cout << "\nMasukkan nilai yang akan dicari : ";
  cin >> Bilangan;

  awal = 0;
  akhir = N - 1;

  do {
    tengah = (awal + akhir) / 2;
    if (Nilai[tengah] == Bilangan) {
      cout << "Data ditemukan pada indeks ke-" << tengah << endl;
      break;
    } else if (Nilai[tengah] < Bilangan) {
      awal = tengah + 1;
    } else {
      akhir = tengah - 1;
    }
  } while (awal <= akhir);
}
