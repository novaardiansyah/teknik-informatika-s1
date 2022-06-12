#include <iostream>
using namespace std;

int main()
{
  cout << "\nPertemuan-05: Tugas Latihan 02\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  for (int i = 0; i < 10; i++) {
    if(i == 4) continue;
    printf("bilangan : %d\n", i);
    if (i == 6) break;
  }
}