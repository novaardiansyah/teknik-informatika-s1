#include <iostream>
using namespace std;

int main()
{
  cout << "\nPertemuan-03: Tugas Akhir\n";
  cout << "=========================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int kdhari;

  cout << "Masukkan kode hari: ";
  cin >> kdhari;

  cout << "===================\n\n";

  if (kdhari == 1) {
    cout << kdhari << ": Senin\n";
  } else if (kdhari == 2) {
    cout << kdhari << ": Selasa\n";
  } else if (kdhari == 3) {
    cout << kdhari << ": Rabu\n";
  } else if (kdhari == 4) {
    cout << kdhari << ": Kamis\n";
  } else if (kdhari == 5) {
    cout << kdhari << ": Jumat\n";
  } else if (kdhari == 6) {
    cout << kdhari << ": Sabtu\n";
  } else if (kdhari == 7) {
    cout << kdhari << ": Minggu\n";
  } else {
    cout << "Kode hari tidak valid\n";
  }
}