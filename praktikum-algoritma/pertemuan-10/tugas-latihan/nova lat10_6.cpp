#include <iostream>
using namespace std;

int main()
{
  cout << "\nPertemuan-10: Tugas Latihan 06\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int x, *p, **q;
  x = 10;
  p = &x;
  q = &p;

  cout << "q = " << **q << endl;
}
