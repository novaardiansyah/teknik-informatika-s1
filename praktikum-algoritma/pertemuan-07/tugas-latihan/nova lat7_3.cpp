#include <iostream>
using namespace std;

void tukar(int x, int y);

int main()
{
  cout << "\nPertemuan-07: Tugas Latihan 03\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int a = 99;
  int b = 11;

  cout << "Nilai sebelum pengubahan: " << a << " dan " << b << endl;
  tukar(a, b);
}

void tukar(int x, int y)
{
  int temp = x;
  x = y;
  y = temp;

  cout << "Nilai setelah pengubahan: " << x << " dan " << y << endl;
}