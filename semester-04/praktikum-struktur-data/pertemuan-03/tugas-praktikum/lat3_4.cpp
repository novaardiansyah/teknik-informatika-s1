#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa
{
  char NIM[30];
  char Nama[25];
  char Jalan[40];
  char Kota[40];
  char KodePos[40];
  char TanggalLahir[40];
};

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  Mahasiswa Mhs[2];

  for (int i = 0; i < 2; i++)
  {
    cout << "Masukkan NIM \t\t: ";
    cin.getline(Mhs[i].NIM, 30);

    cout << "Masukkan Nama \t\t: ";
    cin.getline(Mhs[i].Nama, 25);

    cout << "Masukkan Jalan \t\t: ";
    cin.getline(Mhs[i].Jalan, 40);

    cout << "Masukkan Kota \t\t: ";
    cin.getline(Mhs[i].Kota, 40);

    cout << "Masukkan Kode Pos \t: ";
    cin.getline(Mhs[i].KodePos, 40);

    cout << "Masukkan Tgl Lahir \t: ";
    cin.getline(Mhs[i].TanggalLahir, 40);

    cout << "=========================\n\n";
  }

  cout << "Berikut adalah data yang telah dimasukkan: \n\n";
  for (int i = 0; i < 2; i++)
  {
    cout << "NIM \t\t\t: " << Mhs[i].NIM << endl;
    cout << "Nama \t\t\t: " << Mhs[i].Nama << endl;
    cout << "Alamat \t\t\t: " << Mhs[i].Jalan << ", " << Mhs[i].Kota << ", " << Mhs[i].KodePos << "." << endl;
    cout << "Tanggal Lahir \t: " << Mhs[i].TanggalLahir << endl;

    cout << "=========================\n\n";
  }

  return 0;
}