#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa
{
  char NIM[30];
  char Nama[25];
  char Alamat[40];
  char Umur[5];
};

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  Mahasiswa Mhs[2];

  for (int i = 0; i < 2; i++)
  {
    cout << "Masukkan NIM \t: ";
    cin.getline(Mhs[i].NIM, 30);

    cout << "Masukkan Nama \t: ";
    cin.getline(Mhs[i].Nama, 25);

    cout << "Masukkan Alamat : ";
    cin.getline(Mhs[i].Alamat, 40);

    cout << "Masukkan Umur \t: ";
    cin.getline(Mhs[i].Umur, 5);

    cout << "=========================\n\n";
  }

  cout << "Berikut adalah data yang telah dimasukkan: \n\n";
  for (int i = 0; i < 2; i++)
  {
    cout << "NIM \t: " << Mhs[i].NIM << endl;
    cout << "Nama \t: " << Mhs[i].Nama << endl;
    cout << "Alamat \t: " << Mhs[i].Alamat << endl;
    cout << "Umur \t: " << Mhs[i].Umur << endl;

    cout << "=========================\n\n";
  }

  return 0;
}