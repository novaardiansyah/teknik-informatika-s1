#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int Nilai[] = { 45, 23, 50, 8, 12, 10, 15 };
  int *NilaiPtr = Nilai;

  int i;
  NilaiPtr = Nilai;

  cout << "Nilai Ptr \t\t: " << NilaiPtr << endl;
  cout << "Alamat Nilai \t: " << &Nilai << endl;
  cout << "Nilai yang disimpan pada alamat " << NilaiPtr << " adalah " << *NilaiPtr << endl;

  cout << "Element array index pertama: " << NilaiPtr[0] << "\n\n";

  for (i = 1; i < 7; i++)
  {
    cout << "Nilai yang disimpan pada alamat " << NilaiPtr << " adalah " << *NilaiPtr << endl;
    NilaiPtr++;
  }

  return 0;
}