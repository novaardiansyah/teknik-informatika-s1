#include <iostream>
#include <string>

using namespace std;

int Maksimum(int a, int b, int c)
{
  int maks;
  maks = a;
  if (b > maks)
    maks = b;
  if (c > maks)
    maks = c;
  return maks;
}

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";
  
  int a = 8, b = 12, c = -5;
  cout << "Nilai maksimum dari " << a << ", " << b << " dan " << c << " adalah " << Maksimum(a, b, c) << endl;
}