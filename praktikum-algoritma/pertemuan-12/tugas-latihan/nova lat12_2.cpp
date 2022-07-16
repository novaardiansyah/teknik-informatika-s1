#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

int sort_function (const void *a, const void *b);
char list[5][4] = {"nov", "nab", "nuy", "nat", "nol"};

int main(void)
{
  cout << "\nPertemuan-12: Tugas Latihan 02\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int x;
  qsort (( void *)list, 5, sizeof(list[0]), sort_function);
  for (x = 0; x< 5; x++)
  printf("%s\t", list[x]);
  return 0;
}

int sort_function (const void *a, const void *b)
{
  return (strcmp ((char *) a, (char *)b) );
}