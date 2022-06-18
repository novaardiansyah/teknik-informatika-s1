#include <iostream>
using namespace std;

int main()
{
  cout << "\nPertemuan-08: Tugas Latihan 01\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int size = 12;
  int a[12] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
  int indeks, total = 0;

  for (indeks = 0; indeks <= size - 1; indeks++)
  {
    total += a[indeks];
  }

  printf("Total Setiap Elemen Array adalah %d", total);
  return 0;
}