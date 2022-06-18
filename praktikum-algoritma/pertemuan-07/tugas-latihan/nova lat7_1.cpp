#include <iostream>
using namespace std;

int factorial(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}

int main()
{
  cout << "\nPertemuan-07: Tugas Latihan 01\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int n;
  cout << "Masukkan nilai n : ";
  cin >> n;
  cout << "Faktorial dari " << n << " adalah " << factorial(n) << endl;
}