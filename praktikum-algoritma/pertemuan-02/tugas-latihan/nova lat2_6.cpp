#include <iostream>

using namespace std;
int main()
{
  cout << "\nPertemuan-02: Tugas Latihan 06\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "=========================\n\n";

  int nilai, tugas;

  printf("Masukkan sebuah nilai \t: ");
  scanf("%d", &nilai);

  printf("Masukkan nilai tugas \t: ");
  scanf("%d", &tugas);

  cout << "============================\n\n";

  if (nilai > 70 && tugas >= 75)
  {
    printf("Selamat Anda Lulus\n");
  }
  else
  {
    printf("Maaf Anda Tidak Lulus\n");
  }
}