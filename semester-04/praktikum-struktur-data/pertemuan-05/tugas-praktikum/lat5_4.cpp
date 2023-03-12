#include <iostream>
#include <string>

using namespace std;

void Tukat (int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int a = 8, b = -5;
  cout << "Nilai awal a = " << a << " dan b = " << b << "\n";
  Tukat(&a, &b);
  cout << "Nilai akhir a = " << a << " dan b = " << b << "\n";
}