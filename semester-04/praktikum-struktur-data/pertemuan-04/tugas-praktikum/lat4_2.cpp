#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int x = 12, y;
  int *xPtr = &x;

  cout << "Nilai x \t: " << x << endl;
  cout << "Alamat x \t: " << &x << endl;
  cout << "Nilai xPtr \t: " << xPtr << endl;

  cout << "Nilai yang disimpan pada alamat " << xPtr << " adalah " << *xPtr << endl;

  return 0;
}