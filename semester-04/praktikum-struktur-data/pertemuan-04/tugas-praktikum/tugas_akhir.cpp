#include <iostream>

using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int Nilai[2][3] = { { 11, 23, 17 }, { 8, 21, 10 } };
  cout << "Array : " << "{ { 11, 23, 17 }, { 8, 21, 10 } }\n\n";
  
  for (int *NilaiPtr = Nilai[0]; NilaiPtr < Nilai[0] + 6; NilaiPtr++)
  {
    cout << "Nilai yang disimpan pada alamat " << NilaiPtr << " adalah " << *NilaiPtr << endl;
  }

  return 0;
}