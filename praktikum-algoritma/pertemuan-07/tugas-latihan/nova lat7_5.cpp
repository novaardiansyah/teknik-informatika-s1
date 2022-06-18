#include <iostream>
using namespace std;

int multiply(int a, int b, int c)
{
  return a * b * c;
}

int main()
{
  cout << "\nPertemuan-07: Tugas Latihan 05\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int a, b, c;
  cout << "Masukkan nilai a: ";
  cin >> a;

  cout << "Masukkan nilai b: ";
  cin >> b;

  cout << "Masukkan nilai c: ";
  cin >> c;

  cout << "Hasil perkalian: " << multiply(a, b, c) << endl;
}