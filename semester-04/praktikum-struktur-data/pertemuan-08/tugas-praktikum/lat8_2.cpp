#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int Nilai[20];
  int i, j, N, l;
  int temp, U, lmaks;

  cout << "Masukkan banyaknya bilangan : ";
  cin >> N;

  for (i = 0; i < N; i++) {
    cout << "Masukkan nilai ke-" << i + 1 << " : ";
    cin >> Nilai[i];
  }

  // * Proses Cetak Sebelum Diurutkan
  cout << "\nData sebelum diurutkan : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }

  // * Proses Pengurutan
  U = N - 1;
  for (i = 0; i <= N - 2; i++) {
    lmaks = i;

    for (j = i + 1; j <= U; j++) {
      if (Nilai[j] > Nilai[lmaks]) {
        lmaks = j;
      }
    }

    temp = Nilai[i];
    Nilai[i] = Nilai[lmaks];
    Nilai[lmaks] = temp;
  }

  cout << "\nData setelah diurutkan : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }
  
  return 0;
}
