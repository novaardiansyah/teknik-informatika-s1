#include <iostream>
using namespace std;

int main()
{
  cout << "\nPertemuan-06: Tugas Latihan 03\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int nomer, bagi, sisa;
  string pilihan;

  cout << "Masukkan nomer: ";
  cin >> nomer;

  cout << "Masukkan bilangan pembagi: ";
  cin >> bagi;

  sisa = nomer % bagi;

  cout << "============================\n\n";
  cout << "Bilangan yang dipilih adalah : " << nomer << endl;
  cout << "Bilangan pembagi adalah : " << bagi << "\n\n";

  if (sisa == 0)
  {
    cout << "Sisa bagi tidak ada\n";
  } else {
    cout << "Sisa bagi adalah : " << sisa << endl;
  }

  cout << "\nApakah anda ingin mengulangi? (y/n) : ";
  cin >> pilihan;

  if (pilihan == "y")
  {
    main();
  } else {
    cout << "Terima kasih telah menggunakan program ini\n";
  }
}