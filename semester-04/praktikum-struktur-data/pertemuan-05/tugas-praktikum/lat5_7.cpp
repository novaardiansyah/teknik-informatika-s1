#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa
{
  char NIM[20];
  char Nama[40];
  char Alamat[40];
  short Umur;
};

void Baca(Mahasiswa *Mhs);
void Cetak(Mahasiswa *Mhs);

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  Mahasiswa Mhs;
  Mahasiswa *pMhs = &Mhs;
  cout << "Masukkan data mahasiswa: " << endl;
  Baca(pMhs);

  cout << "Data mahasiswa: " << endl;
  Cetak(pMhs);
}

void Baca(Mahasiswa *Mhs)
{
  cout << "NIM \t: ";
  cin.getline(Mhs->NIM, 20);

  cout << "Nama \t: ";
  cin.getline(Mhs->Nama, 40);

  cout << "Alamat \t: ";
  cin.getline(Mhs->Alamat, 40);

  cout << "Umur \t: ";
  cin >> Mhs->Umur;
}

void Cetak(Mahasiswa *Mhs)
{
  cout << "NIM \t: " << Mhs->NIM << endl;
  cout << "Nama \t: " << Mhs->Nama << endl;
  cout << "Alamat \t: " << Mhs->Alamat << endl;
  cout << "Umur \t: " << Mhs->Umur << endl;
}
