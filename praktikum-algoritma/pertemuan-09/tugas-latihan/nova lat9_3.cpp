#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
  cout << "\nPertemuan-09: Tugas Latihan 03\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  char c = 'C';

  if (islower(c))
  {
    cout << "Huruf " << c << " adalah huruf kecil.\n";
  }
  else
  {
    cout << "Huruf " << c << " bukan huruf kecil.\n";
  }
}