#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
  cout << "\nPertemuan-09: Tugas Akhir\n";
  cout << "=========================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  char inama[25], ihobi[25];

  printf("Masukkan Nama : ");
  cin.getline(inama, 25);

  printf("Masukkan Hobi : ");
  cin.getline(ihobi, 25);

  cout << "====================\n\n";

  printf("Nama anda adalah : %s\n", inama);
  printf("Hobi anda adalah : %s\n", ihobi);
  return 0;
}