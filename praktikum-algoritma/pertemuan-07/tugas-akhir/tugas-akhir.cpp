#include <iostream>
using namespace std;

int check_ganjil_genap(int x)
{
  if (x % 2 == 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

int main()
{
  cout << "\nPertemuan-07: Tugas Akhir\n";
  cout << "=========================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int x;
  cout << "Masukkan angka: ";
  cin >> x;

  if (check_ganjil_genap(x) == 0)
  {
    cout << "Angka " << x << " adalah genap\n";
  }
  else
  {
    cout << "Angka " << x << " adalah ganjil\n";
  }
}