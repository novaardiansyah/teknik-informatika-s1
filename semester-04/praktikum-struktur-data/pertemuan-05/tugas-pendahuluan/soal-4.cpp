#include <iostream>
#include <string>
using namespace std;

int hitungLuasPersegiPanjang(int panjang, int lebar) {
  int luas = panjang * lebar;
  return luas;
}

int main() 
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int p, l;
  
  cout << "Masukkan panjang persegi panjang: ";
  cin >> p;

  cout << "Masukkan lebar persegi panjang: ";
  cin >> l;

  int luas = hitungLuasPersegiPanjang(p, l);
  cout << "Luas persegi panjang adalah: " << luas << endl;
  
  return 0;
}
