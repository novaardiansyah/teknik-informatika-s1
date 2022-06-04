#include <iostream>
#include <math.h>

using namespace std;
int main()
{
  float jari_jari, volume, luas;
  float pi = 3.14;

  cout << "\nPertemuan-02: Tugas Akhir\n";
  cout << "=========================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "=========================\n\n";

  cout << "Masukkan nilai desimal untuk jari-jari \t: ";
  cin >> jari_jari;

  volume = (4 / 3) * pi * pow(jari_jari, 3);
  luas = 4 * pi * pow(jari_jari, 2);

  cout << "\n======================================\n\n";
  cout << "Volume \t: " << volume << endl;
  cout << "Luas \t: " << luas << endl;
}