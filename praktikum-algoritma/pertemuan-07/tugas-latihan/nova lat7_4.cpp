#include <iostream>
using namespace std;

long fibonacci(int n)
{
  if (n == 1 || n == 2)
    return 1;
  else
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
  cout << "\nPertemuan-07: Tugas Latihan 04\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int n;
  cout << "Masukkan n: ";
  cin >> n;

  cout << "Fibonacci ke-" << n << ": " << fibonacci(n) << endl;
}