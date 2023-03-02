#include <iostream>
#include <string>

using namespace std;

struct tinggal
{
  char Jalan[40];
  char Kota[40];
  char Pos[5];
};

struct TglLahir
{
  char Tgl[4];
  char Bln[4];
  char Thn[5];
};

struct Mahasiswa
{
  char NIM[15];
  char Nama[25];
};

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  Mahasiswa Mhs;

  cout << "Masukkan NIM \t\t\t: ";
  cin.getline(Mhs.NIM, 15);

  cout << "Masukkan Nama \t\t\t: ";
  cin.getline(Mhs.Nama, 25);

  TglLahir Mhs_TglLahir;

  cout << "Masukkan Tanggal Lahir \t: ";
  cin.getline(Mhs_TglLahir.Tgl, 4);

  cout << "Masukkan Bulan Lahir \t: ";
  cin.getline(Mhs_TglLahir.Bln, 4);

  cout << "Masukkan Tahun Lahir \t: ";
  cin.getline(Mhs_TglLahir.Thn, 5);

  tinggal Mhs_tinggal;

  cout << "Masukkan Jalan \t\t\t: ";
  cin.getline(Mhs_tinggal.Jalan, 40);

  cout << "Masukkan Kota \t\t\t: ";
  cin.getline(Mhs_tinggal.Kota, 40);

  cout << "Masukkan Kode Pos \t\t: ";
  cin.getline(Mhs_tinggal.Pos, 5);

  cout << "=========================\n\n";

  cout << "Berikut adalah data yang telah dimasukkan: \n";
  cout << "NIM \t\t\t: " << Mhs.NIM << endl;
  cout << "Nama \t\t\t: " << Mhs.Nama << endl;
  cout << "Tanggal Lahir \t: " << Mhs_TglLahir.Tgl << "/" << Mhs_TglLahir.Bln << "/" << Mhs_TglLahir.Thn << endl;
  cout << "Alamat \t\t\t: " << Mhs_tinggal.Jalan << ", " << Mhs_tinggal.Kota << ", " << Mhs_tinggal.Pos << "." << endl;

  return 0;
}