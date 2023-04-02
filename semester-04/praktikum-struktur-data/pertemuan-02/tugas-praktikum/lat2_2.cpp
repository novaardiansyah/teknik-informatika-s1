#include <iostream>
using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";
  
  int Nilai[4];
  int i, Jumlah = 0;
  float Rata_Rata;

  // * Membaca dan Menghitung Jumlah
  for (i = 0; i < 4; i++)
  {
    cout << "Masukkan element ke-" << i << " = ";
    cin >> Nilai[i];
    Jumlah += Nilai[i];
  }

  // * Menghitung Rata-Rata
  Rata_Rata = (float)Jumlah / 4;

  // * Mencetak Hasil
  cout << "\n\nDeretan Bilangan : ";
  for (i = 0; i < 4; i++)
  {
    cout << Nilai[i] << " ";
  }

  cout << "\nJumlah \t\t: " << Jumlah;
  cout << "\nRata-Rata \t: " << Rata_Rata;
}