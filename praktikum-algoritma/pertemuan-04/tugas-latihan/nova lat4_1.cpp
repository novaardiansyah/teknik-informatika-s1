#include <iostream>

using namespace std;

int main()
{
  cout << "\nPertemuan-04: Tugas Latihan 01\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "=========================\n\n";

  int kdhari;

  printf("Masukkan kode hari: ");
  scanf("%d", &kdhari);

  switch (kdhari)
  {
  case 1:
    printf("Senin\n");
    break;
  case 2:
    printf("Selasa\n");
    break;
  case 3:
    printf("Rabu\n");
    break;
  case 4: 
    printf("Kamis\n");
    break;
  case 5:
    printf("Jumat\n");
    break;
  case 6:
    printf("Sabtu\n");
    break;
  case 7:
    printf("Minggu\n");
    break;
  default:
    printf("Kode hari tidak valid\n");
    break;
  }
}