#include <iostream>
using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";
  
  int Nilai[5];
  int Posisi[5];
  int i, Bilangan, Banyak;
  bool Ketemu;

  for (i = 0; i < 5; i++)
  {
    cout << "Masukkan nilai ke-" << i + 1 << " = ";
    cin >> Nilai[i];
  }

  cout << "\nDeret Bilangan : ";
  for (i = 0; i < 5; i++)
  {
    cout << Nilai[i] << " ";
  }

  cout << "\n\nMasukkan bilangan yang dicari : ";
  cin >> Bilangan;

  Banyak = 0;
  for (i = 0; i < 5; i++)
  {
    if (Nilai[i] == Bilangan)
    {
      Banyak++;
      Posisi[Banyak] = i;
      Ketemu = true;
    } else {
      Ketemu = false;
    }
  }

  if (Ketemu) {
    cout << "Bilangan : " <<  Bilangan << " telah ditemukan sebanyak " << Banyak << " kali" << endl;
    cout << "Posisi : ";
    for (i = 1; i <= Banyak; i++)
    {
      cout << Posisi[i] << " ";
    }
  } else {
    cout << "Bilangan : " <<  Bilangan << " tidak ditemukan" << endl;
  }
}