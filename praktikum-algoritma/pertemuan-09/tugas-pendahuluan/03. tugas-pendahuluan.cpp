#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  cout << "\nPertemuan-09: Tugas Pendahuluan 03\n";
  cout << "==================================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  char asal[100];
  char hasil[100];

  cout << "Masukan kalimat : ";
  cin.getline(asal, 100);

  cout << "====================\n";

  strcpy(hasil, asal);
  cout << "Kalimat asli : " << asal << endl;
  cout << "Kalimat yang sudah diubah : " << hasil << endl;
}