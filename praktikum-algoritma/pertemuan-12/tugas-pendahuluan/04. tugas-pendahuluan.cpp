#include <iostream>
using namespace std;

int main()
{
  cout << "\nPertemuan-12: Tugas Pendahuluan 04\n";
  cout << "==================================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int NumList[10] = { 4, 8, 5, 9, 6, 2, 7, 5, 9, 5 };
  int Swap;
  cout << "Data sebelum diurutkan: \n";
  for (int ctr = 0; ctr < 10; ctr++)
  {
    cout << setw(3) << NumList[ctr];
  }

  cout << "\n\n";
  for (int i = 0; i < 9; i++)
    for (int ii = 0; ii < 9; ii++)
      if (NumList[ii] < NumList[ii + 1])
      {
        Swap = NumList[ii];
        NumList[ii] = NumList[ii + 1];
        NumList[ii + 1] = Swap;
      }

  cout << "Data setelah diurutkan : \n";
  for (int iii = 0; iii < 10; iii++)
    cout << setw(3) << NumList[iii];
  cout << endl << endl;
}