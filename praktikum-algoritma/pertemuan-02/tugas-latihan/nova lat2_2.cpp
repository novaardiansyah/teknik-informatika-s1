#include <iostream>

using namespace std;
int main()
{
  int panjang, lebar, tinggi, luas, volume;

  cout << "\nPertemuan-02: Tugas Latihan 02\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "=========================\n\n";

  printf("Masukkan panjang \t: ");
  scanf("%d", &panjang);

  printf("Masukkan lebar \t\t: ");
  scanf("%d", &lebar);

  printf("Masukkan tinggi \t: ");
  scanf("%d", &tinggi);

  cout << "========================\n\n";

  luas = (2 * panjang * lebar) + (2 * panjang * tinggi) + (2 * tinggi * lebar);
  volume = panjang * lebar * tinggi;
  printf("Jadi luasnya adalah \t: %d\n", luas);
  printf("Jadi volumenya adalah \t: %d\n", volume);
}