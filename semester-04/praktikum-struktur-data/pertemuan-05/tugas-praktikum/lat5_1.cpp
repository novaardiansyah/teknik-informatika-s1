#include <iostream>
#include <string>

using namespace std;

void tukar(int &x, int &y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int a = 8, b = -5;
  cout << "Nilai awal a = " << a << " dan b = " << b << "\n";
  tukar(a, b);
  cout << "Nilai akhir a = " << a << " dan b = " << b << "\n";
}
