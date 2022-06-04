#include <iostream>

using namespace std;
int main()
{
  cout << "\nPertemuan-02: Tugas Latihan 05\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "=========================\n\n";

  long int beli, disc, total;

  printf("Masukkan Harga Pebelian : ");
  scanf("%ld", &beli);

  cout << "===============================\n\n";

  if (beli >= 100000)
  {
    disc = 0.1 * beli;
    total = beli - disc;
  }
  else
  {
    disc = 0.05 * beli;
    total = beli - disc;
  }

  printf("Nominal Pembelian \t\t\t: %ld\n", beli);
  printf("Nominal Discount \t\t\t: %ld\n", disc);
  printf("Nominal Total Pembayaran \t: %ld\n", total);
}