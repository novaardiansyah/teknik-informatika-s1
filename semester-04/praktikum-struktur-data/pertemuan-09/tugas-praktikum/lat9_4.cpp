#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int Nilai[20];
  int i, j, k, N;
  int temp;

  cout << "Masukkan Banyak Bilangan : ";
  cin >> N;

  for (i = 0; i < N; i++)
  {
    cout << "Elemen Ke-" << i << " : ";
    cin >> Nilai[i];
  }

  cout << "\nData Sebelum diurutkan : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }

  cout << "\n\nMetode Insertion Sort (Menurun) : ";

  for (i = 0; i < N; i++) {
    temp = Nilai[i];
    j = i - 1;

    while ((temp > Nilai[j]) && (j >= 1)) {
      Nilai[j + 1] = Nilai[j];
      j--;
    }

    if (temp <= Nilai[j]) {
      Nilai[j + 1] = temp;
    } else {
      Nilai[j + 1] = Nilai[j];
      Nilai[j] = temp;
    }
  }

  cout << "\n\nData Setelah diurutkan : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }

  return 0;
}