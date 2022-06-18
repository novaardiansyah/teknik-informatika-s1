#include <iostream>
using namespace std;

int findmax(int n1, int n2);
void printmax(int n);

int main()
{
  cout << "\nPertemuan-07: Tugas Latihan 02\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int i = 5;
  int j = 7;
  int k = findmax(i, j);

  printmax(k);
}

int findmax(int n1, int n2)
{
  if (n1 > n2)
  {
    return n1;
  }
  else
  {
    return n2;
  }
}

void printmax(int n)
{
  cout << "Nilai terbesar adalah " << n << endl;
}