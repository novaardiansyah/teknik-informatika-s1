#include <iostream>
using namespace std;

void printArray(int[][3]);

int main()
{
  cout << "\nPertemuan-08: Tugas Latihan 03\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int matrik1[2][3] = {{1, 2}, {4, 5, 6}};

  printArray(matrik1);

  return 0;
}

void printArray(int a[][3])
{
  int i, j;

  for (i = 0; i <= 1; i++)
  {
    for (j = 0; j <= 2; j++)
    {
      printf("%d", a[i][j]);
      printf("\t");
    }
    printf("\n");
  }
}