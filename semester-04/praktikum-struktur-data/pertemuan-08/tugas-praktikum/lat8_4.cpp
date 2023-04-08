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
  int temp, lmin;

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
  for (i = 0; i < N-1; i++) {
    lmin = i;
    
    for (j = i + 1; j < N; j++) {
      if (Nilai[j] > Nilai[lmin]) {
        lmin=j;
      }
    }

    temp = Nilai[i];
    Nilai[i] = Nilai[lmin];
    Nilai[lmin] = temp;
  }


  cout << "\nData setelah diurutkan : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }

  return 0;
}
