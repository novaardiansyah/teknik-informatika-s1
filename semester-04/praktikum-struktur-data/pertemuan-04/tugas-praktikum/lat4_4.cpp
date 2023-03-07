#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int x = 8;
  int *xPtr1;
  int **xPtr2;

  xPtr1 = &x;
  xPtr2 = &xPtr1;

  cout << "Nilai x \t\t: " << x << endl;
  cout << "Alamat x \t\t: " << &x << endl;
  cout << "Nilai xPtr1 \t: " << xPtr1 << endl;
  cout << "Alamat xPtr1 \t: " << &xPtr1 << endl;
  cout << "Nilai xPtr2 \t: " << xPtr2 << endl;
  cout << "Alamat xPtr2 \t: " << &xPtr2 << endl;

  return 0;
}