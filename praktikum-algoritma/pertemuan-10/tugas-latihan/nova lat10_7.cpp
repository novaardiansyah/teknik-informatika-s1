#include <iostream>
using namespace std;

void duplicate(int &a, int &b, int &c)
{
  a *= 2;
  b *= 2;
  c *= 2;
}

int main()
{
  cout << "\nPertemuan-10: Tugas Latihan 07\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int x = 1, y = 3, z = 7;
  duplicate(x, y, z);

  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  cout << "z = " << z << endl;
}
