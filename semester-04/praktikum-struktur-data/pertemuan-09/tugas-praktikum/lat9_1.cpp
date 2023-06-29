#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int Nilai[20];
  int i, k, N, l;
  int temp, jarak, s;

  cout << "Masukkan Banyak Bilangan : ";
  cin >> N;

  for (i = 0; i < N; i++)
  {
    cout << "Elemen Ke-" << i << " : ";
    cin >> Nilai[i];
  }

  cout << "\nData Sebelum diurutkan : ";
  for (i = 0; i < N; i++)
  {
    cout << Nilai[i] << " ";
  }

  cout << "\n\nMetode Shell Sort (Menaik) : ";

  jarak = N / 2;
  cout << "\nJarak = " << jarak;

  while (jarak >= 1) {
    do {
      s = 0;

      for (i = 0; i <= (N - jarak) - 1; i++) {
        k = i + jarak;

        if (Nilai[i] > Nilai[k]) {
          temp = Nilai[i];
          Nilai[i] = Nilai[k];
          Nilai[k] = temp;
          s = 1;

          for (l = 0; l < N; l++) {
            cout << Nilai[l] << " ";
          }
        }
      }
    }

    while (s != 0);
    jarak /= 2;
    cout << "\nJarak = " << jarak << "\n";
  }

  cout << "\n\nData Setelah diurutkan : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }

  return 0;
}
