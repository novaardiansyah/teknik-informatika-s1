#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa
{
  char NIM[15];
  char Nama[25];
  char Alamat[40];
  short Umur;
};

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  Mahasiswa Mhs;

  cout << "Masukkan NIM \t: ";
  cin.getline(Mhs.NIM, 15);

  cout << "Masukkan Nama \t: ";
  cin.getline(Mhs.Nama, 25);

  cout << "Masukkan Alamat : ";
  cin.getline(Mhs.Alamat, 40);

  cout << "Masukkan Umur \t: ";
  cin >> Mhs.Umur;

  cout << "=========================\n\n";

  cout << "Berikut adalah data yang telah dimasukkan: \n";
  cout << "NIM \t: " << Mhs.NIM << endl;
  cout << "Nama \t: " << Mhs.Nama << endl;
  cout << "Alamat \t: " << Mhs.Alamat << endl;
  cout << "Umur \t: " << Mhs.Umur << endl;

  return 0;
}