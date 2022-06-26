#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  cout << "\nPertemuan-09: Tugas Latihan 06\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  char destination[25];
  char blank[1] = {' '};
  char c[1] = {'C++'};
  char borland[1] = {'B'};

  strcpy(destination, borland);
  strcat(destination, blank);
  strcat(destination, c);

  printf("%s\n", destination);
}