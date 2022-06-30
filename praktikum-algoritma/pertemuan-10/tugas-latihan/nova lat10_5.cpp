#include <iostream>
using namespace std;

int main()
{
  cout << "\nPertemuan-10: Tugas Latihan 05\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int numbers[5], *p;
  p = numbers;
  *p = 10;

  p++;
  *p = 20;

  p = &numbers[2];
  *p = 30;

  p = numbers + 3;
  *p = 40;

  p = numbers;
  *(p + 4) = 50;

  for (int n = 0; n < 5; n++)
  {
    cout << "numbers[" << n << "] = " << numbers[n] << endl;
  }
}
