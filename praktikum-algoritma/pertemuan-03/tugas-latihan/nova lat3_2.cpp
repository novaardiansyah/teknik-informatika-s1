#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "\nPertemuan-03: Tugas Latihan 02\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  long int kode, jumlah, sks, semester;
  string nama;

  printf("Masukkan kode: ");
  scanf("%ld", &kode);

  printf("Jumlah sks per semester: ");
  scanf("%ld", &sks);

  if (kode == 1) {
    nama     = "Teknik Informatika";
    jumlah   = 30000 * sks;
    semester = jumlah * 2;
  } else if (kode == 2) {
    nama     = "Akutansi";
    jumlah   = 20000 * sks;
    semester = jumlah * 2;
  } else {
    nama     = "Manajemen";
    jumlah   = 15000 * sks;
    semester = jumlah * 2;
  }

  cout << "===========================\n\n";

  cout << "Nama Kursus: " << nama << endl;
  printf("Pembayaran dalam 1 semester: Rp. %ld\n", jumlah);
  printf("Pembayaran dalam 1 tahun: Rp. %ld\n", semester);
}