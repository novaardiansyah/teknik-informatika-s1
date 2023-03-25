#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int x = 10;
  int *ptr;

  ptr = &x;

  cout << "Nilai x = " << x << endl;
  cout << "Alamat memori x = " << &x << endl;
  cout << "Nilai yang ditunjuk oleh ptr = " << *ptr << endl;
  cout << "Alamat memori yang ditunjuk oleh ptr = " << ptr << endl;
  cout << "Alamat memori dari ptr = " << &ptr << endl;

  *ptr = 20;
  cout << "Nilai x sekarang = " << x << endl;

  return 0;
}
