#include <iostream>
using namespace std;

int hitung_keliling(int a, int b, int c)
{
  return a + b + c;
}

int main()
{
  cout << "\nPertemuan-07: Tugas Pendahuluan\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int a, b, c;
  a = 3;
  b = 4;
  c = 5;

  cout << "Keliling dari segitiga dengan alas " << a << " dan tinggi " << b << " adalah " << hitung_keliling(a, b, c) << endl;
}