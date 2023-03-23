#include <iostream>
using namespace std;

int main() {
  int data[] = {34, 8, 50, 74, 87, 90, 12, 25, 20, 30, 35, 45, 40, 22, 29, 72, 60, 55, 53, 12, 32, 33, 12, 12, 41, 12};
  int n = sizeof(data) / sizeof(data[0]); // * Menghitung ukuran array
  int count_12 = 0, count_15 = 0, count_37 = 0;
  int posisi_12[10], posisi_15[10], posisi_37[10];

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  cout << "Data yang ada pada array: " << endl;\
  for (int i = 0; i < n; i++) {
    cout << data[i] << " ";
  }
  cout << endl << endl;

  for (int i = 0; i < n; i++) {
    if (data[i] == 12) {
      count_12++;
      cout << "Data 12 ditemukan pada posisi ke-" << i << endl;
    } else if (data[i] == 15) {
      count_15++;
      cout << "Data 15 ditemukan pada posisi ke-" << i << endl;
    } else if (data[i] == 37) {
      count_37++;
      cout << "Data 37 ditemukan pada posisi ke-" << i << endl;
    }
  }

  cout << endl;
  cout << "Banyaknya data 12 yang ditemukan: " << count_12 << endl;
  cout << "Banyaknya data 15 yang ditemukan: " << count_15 << endl;
  cout << "Banyaknya data 37 yang ditemukan: " << count_37 << endl;

  return 0;
}
