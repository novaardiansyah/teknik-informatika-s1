#include <iostream>

using namespace std;
int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";

  int Nilai[10] = {8, 12, 20, 15, 7, 5, 6, 4, 32, 3};
  int i, jumlah = 0;
  float Rata_Rata;

  cout << "\nDeretan Bilangan : ";
  // * Menghitung jumlah
  for (i = 0; i < 10; i++)
  {
    jumlah += Nilai[i];
    Rata_Rata = (float)jumlah / 10;

    // * Mencetak Elemnet Array
    cout << Nilai[i] << " ";
  }

  cout << "\nJumlah \t\t: " << jumlah;
  cout << "\nRata-Rata \t: " << Rata_Rata;
}