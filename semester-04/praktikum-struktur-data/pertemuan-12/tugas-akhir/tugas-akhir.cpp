#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void DecimalToBinary(int decimal) {
  int binary[MAX_SIZE];
  int index = 0;

  while (decimal > 0) {
    int remainder = decimal % 2;
    binary[index++] = remainder;
    decimal /= 2;
  }

  cout << "Biner: ";
  for (int i = index - 1; i >= 0; i--) {
    cout << binary[i];
  }
  cout << endl;
}

int main() {
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";
  
  int decimal;

  cout << "Masukkan bilangan desimal: ";
  cin >> decimal;

  DecimalToBinary(decimal);

  return 0;
}