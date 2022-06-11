#include <iostream>

using namespace std;

int main()
{
  cout << "\nPertemuan-04: Tugas Akhir\n";
  cout << "=========================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int pembelian;
  string bonus;

  cout << "Pembelian: ";
  cin >> pembelian;

  cout << "=================\n\n";

  if (pembelian < 100000)
  {
    bonus = "Tidak Ada Bonus";
  }
  else if (pembelian >= 100000 && pembelian < 200000)
  {
    bonus = "Discount 5%";
  }
  else if (pembelian >= 200000 && pembelian < 300000)
  {
    bonus = "Tiket ke Yogya";
  }
  else if (pembelian >= 300000 && pembelian < 400000)
  {
    bonus = "Tiket ke Bali";
  }
  else if (pembelian >= 400000 && pembelian < 500000)
  {
    bonus = "Jam Tangan Rolex";
  }
  else if (pembelian >= 500000)
  {
    bonus = "Tiket ke Swiss";
  }

  cout << "Bonus: " << bonus << endl;
}