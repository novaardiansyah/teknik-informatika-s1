#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int Nilai[] = { 11, 23, 17, 8, 21, 10, 25 };
  int *NilaiPtr = Nilai;

  NilaiPtr = Nilai;

  cout << "Nilai Ptr \t\t: " << NilaiPtr << endl;
  cout << "Alamat Nilai \t: " << &Nilai << endl;
  cout << "Nilai yang disimpan pada alamat " << NilaiPtr << " adalah " << *NilaiPtr << endl;

  cout << "Element array index pertama: " << NilaiPtr[0] << "\n\n";

  while (NilaiPtr < Nilai + 7)
  {
    cout << "Nilai yang disimpan pada alamat " << NilaiPtr << " adalah " << *NilaiPtr << endl;
    NilaiPtr++;
  }

  return 0;
}