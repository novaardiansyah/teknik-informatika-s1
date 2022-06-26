#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  cout << "\nPertemuan-09: Tugas Latihan 05\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  char str1[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
  char str2[10];

  strcpy(str2, str1);
  printf("%s\n", str2);
}