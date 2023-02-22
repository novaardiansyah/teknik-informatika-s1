#include <iostream>

using namespace std;
int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n\n";
  
  int Nilai[5];
  int i, Terbesar;

  for (i = 0; i < 5; i++)
  {
    cout << "Masukkan nilai ke-" << i + 1 << " = ";
    cin >> Nilai[i];
  }

  Terbesar = Nilai[0];
  for (i = 0; i < 5; i++)
  {
    if (Nilai[i] > Terbesar)
    {
      Terbesar = Nilai[i];
    }
  }

  cout << "\nNilai terbesar adalah " << Terbesar << endl;
}