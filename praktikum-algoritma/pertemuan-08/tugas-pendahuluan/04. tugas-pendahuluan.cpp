#include <iostream>
using namespace std;

int main()
{
  cout << "\nPertemuan-08: Tugas Pendahuluan 04\n";
  cout << "==================================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int array_angka[5] = {1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i++)
  {
    if (i != 4)
    {
      cout << array_angka[i] << ", ";
    }
    else
    {
      cout << array_angka[i] << endl;
    }
  }
}
