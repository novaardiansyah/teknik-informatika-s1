#include <iostream>
using namespace std;

int main()
{
  cout << "\nPertemuan-10: Tugas Akhir\n";
  cout << "=========================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  char *p = "Nova";
  int count = 0;

  while (*p != '\0')
  {
    count++;
    p++;
  }
  cout << "Jumlah karakter: " << count << endl;
}