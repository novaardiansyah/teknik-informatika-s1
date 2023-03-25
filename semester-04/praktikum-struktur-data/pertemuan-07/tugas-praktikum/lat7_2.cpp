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
  bool tukar;

  cout << "Masukkan banyak data : ";
  cin >> N;

  for (i = 0; i < N; i++) {
    cout << "Masukkan data ke-" << i + 1 << " : ";
    cin >> Nilai[i];
  }

  cout << endl;
  cout << "Data sebelum diurutkan : ";
  for (i = 0; i < N; i++)
  {
    cout << Nilai[i] << " ";
  }

  i = 0;
  for (j = N -1; j >= 0; j--)
  {
    tukar = false;
    for (k = 0; k < j; k++) {
      if (Nilai[k] < Nilai[k + 1]) {
        temp = Nilai[k];
        Nilai[k] = Nilai[k + 1];
        Nilai[k + 1] = temp;
        tukar = true;
      }
    }
    
    if (tukar == false) {
      break;
    }
    
    cout << endl;
    i++;
  }

  cout << "Data setelah diurutkan : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }

  return 0;
}
