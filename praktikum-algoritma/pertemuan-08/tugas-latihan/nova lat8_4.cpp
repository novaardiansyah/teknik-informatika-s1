#include <iostream>
using namespace std;

int main()
{
  cout << "\nPertemuan-08: Tugas Latihan 04\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int matrik1[3][3] = {{1, 3, 4}, {6, 7, 8}, {0, 2, 2}};

  int i, j;

  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
    {
      printf("%d", matrik1[i][j]);
      printf("\t");
    }
    printf("\n");
  }

  return 0;
}