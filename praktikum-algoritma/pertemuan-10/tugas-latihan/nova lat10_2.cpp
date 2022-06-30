#include <iostream>
using namespace std;

int main()
{
  cout << "\nPertemuan-10: Tugas Latihan 02\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int *ptr, num;
  ptr = &num;

  *ptr = 100;
  cout << "Nilai num = " << num << endl;
  (*ptr)++;

  cout << "Nilai num = " << num << endl;
  (*ptr) * 2;

  cout << "Nilai num = " << num << endl;
}