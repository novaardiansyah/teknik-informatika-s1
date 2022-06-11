#include <iostream>

using namespace std;

void luas_segitiga()
{
  int sisi_a, sisi_b, sisi_c;

  cout << "Masukkan sisi a: ";
  cin >> sisi_a;

  cout << "Masukkan sisi b: ";
  cin >> sisi_b;

  cout << "Masukkan sisi c: ";
  cin >> sisi_c;

  cout << "\n===================\n\n";

  int luas;
  int keliling;

  luas = (sisi_a * sisi_b) / 2;
  keliling = sisi_a + sisi_b + sisi_c;

  cout << "Luas Segitiga: " << luas << endl;
  cout << "Keliling Segitiga: " << keliling << endl;
}

void luas_persegipanjang()
{
  int panjang, lebar;

  cout << "Masukkan panjang: ";
  cin >> panjang;

  cout << "Masukkan lebar: ";
  cin >> lebar;

  cout << "\n==================\n\n";

  int luas;
  int keliling;

  luas = panjang * lebar;
  keliling = 2 * (panjang + lebar);

  cout << "Luas Persegi Panjang: " << luas << endl;
  cout << "Keliling Persegi Panjang: " << keliling << endl;
}

void luas_lingkaran()
{
  int jari_jari;

  cout << "Masukkan jari-jari: ";
  cin >> jari_jari;

  cout << "\n======================\n\n";

  int luas;
  int keliling;

  luas = 3.14 * jari_jari * jari_jari;
  keliling = 2 * 3.14 * jari_jari;

  cout << "Luas Lingkaran: " << luas << endl;
  cout << "Keliling Lingkaran: " << keliling << endl;
}

int main()
{
  cout << "\nPertemuan-04: Tugas Latihan 02\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "=========================\n\n";

  char kode;
  cout << "Masukkan kode (S, P, L): ";
  cin >> kode;

  cout << endl;

  switch (kode)
  {
  case 'S':
    luas_segitiga();
    break;
  case 'P':
    luas_persegipanjang();
    break;
  case 'L':
    luas_lingkaran();
    break;
  default:
    cout << "Kode tidak dikenali\n";
    break;
  }
}