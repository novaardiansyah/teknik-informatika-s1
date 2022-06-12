#include <iostream>
using namespace std;

int main()
{
  cout << "\nPertemuan-03: Tugas Latihan 03\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int nilai;

  cout << "Masukkan nilai: ";
  cin >> nilai;

  cout << "====================\n\n";

  if (nilai > 0) {
    cout << nilai << " adalah bilangan positif\n";
  } else if (nilai < 0) {
    cout << nilai << " adalah bilangan negatif\n";
  } else {
    cout << nilai << " adalah bilangan nol\n";
  }
}