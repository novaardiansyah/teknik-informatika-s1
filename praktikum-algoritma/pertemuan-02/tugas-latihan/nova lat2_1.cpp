#include <iostream>

using namespace std;
int main()
{
  int panjang, lebar, luas, keliling;

  cout << "\nPertemuan-02: Tugas Latihan 01\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "=========================\n\n";

  printf("Masukkan panjang \t: ");
  scanf("%d", &panjang);

  printf("Masukkan lebar \t\t: ");
  scanf("%d", &lebar);

  luas = panjang * lebar;
  keliling = 2 * (panjang + lebar);

  printf("\n========================\n\n");

  printf("Jadi luasnya adalah \t: %d\n", luas);
  printf("Jadi kelilingnya adalah : %d\n", keliling);
}