#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  cout << "\nPertemuan-12: Tugas Latihan 01\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int NumList[8] = {5, 34, 32, 25, 75, 42, 22, 2};
  int Swap;

  cout << "Data sebelum diurutkan: \n";
  for(int ctr = 0; ctr < 8; ctr++)
  {
   cout << setw(3) << NumList[ctr];
  }
  cout << "\n\n";

  for (int i = 0; i < 7; i++)
   for (int ii = 0; ii < 7; ii++)
    if (NumList[ii] > NumList [ii + 1] )
    {
     Swap = NumList [ii];
     NumList [ii] = NumList[ii + 1];
     NumList [ii + 1] = Swap;
    }
  
  cout << "Data setelah diurutkan : \n";
  for (int iii=0; iii<8; iii++)
  
  cout << setw (3) << NumList [iii];
  cout << endl << endl;
}
