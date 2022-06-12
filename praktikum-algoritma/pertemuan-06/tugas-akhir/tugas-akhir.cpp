#include <iostream>
using namespace std;

int main()
{
  cout << "\nPertemuan-06: Tugas Akhir\n";
  cout << "=========================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int a = 0, b = 1, c = 0;
  cout << "Fibonacci : \n";

  for (int i = 0; i < 10; i++)
  {
    c = a + b;
    cout << c << " ";
    a = b;
    b = c;
  }
}