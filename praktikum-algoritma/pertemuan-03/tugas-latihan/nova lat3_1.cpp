#include <iostream>
using namespace std;

int main()
{
  cout << "\nPertemuan-03: Tugas Latihan 01\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";
  
  int nilai;

  cout << "Masukkan nilai: ";
  cin >> nilai;

  if (nilai > 70) {
    cout << "LULUS\n";
  } else {
    cout << "TIDAK LULUS\n";
  }
}