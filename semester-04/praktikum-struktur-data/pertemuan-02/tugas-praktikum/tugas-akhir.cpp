#include <iostream>
using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";
  
  int ordo = 3;
  int matriks1[ordo][ordo] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int matriks2[ordo][ordo] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
  int hasil[ordo][ordo];

  for (int i = 0; i < ordo; i++) {
    for (int j = 0; j < ordo; j++) {
      hasil[i][j] = matriks1[i][j] + matriks2[i][j];
    }
  }

  cout << "Hasil penjumlahan matriks:" << endl;
  for (int i = 0; i < ordo; i++) {
    for (int j = 0; j < ordo; j++) {
      cout << hasil[i][j] << " ";
    }
    cout << endl;
  }
}