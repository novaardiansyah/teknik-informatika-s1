#include <iostream>
using namespace std;

int main()
{
  cout << "\nPertemuan-10: Tugas Latihan 03\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int num[4];
  int *start, *end;

  start = num;
  end = &num[3];

  while (start != end)
  {
    cout << "Masukkan nilai: ";
    cin >> *start;
    start++;
  }
}