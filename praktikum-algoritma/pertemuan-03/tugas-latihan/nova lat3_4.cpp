#include <iostream>
using namespace std;

int main()
{
  cout << "\nPertemuan-03: Tugas Latihan 04\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int nilai;

  cout << "Masukkan nilai: ";
  cin >> nilai;

  cout << "==================\n\n";

  if (nilai >= 81 && nilai <= 100) {
    cout << nilai << " adalah A\n";
  } else if (nilai >= 71 && nilai < 81) {
    cout << nilai << " adalah B\n";
  } else if (nilai >= 61 && nilai < 71) {
    cout << nilai << " adalah C\n";
  } else if (nilai >= 51 && nilai < 61) {
    cout << nilai << " adalah D\n";
  } else if (nilai < 51) {
    cout << nilai << " adalah E\n";
  } else {
    cout << "Nilai tidak valid\n";
  }
}