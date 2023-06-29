#include <iostream>
using namespace std;

void shellSort(string arr[], int n) {
  for (int gap = n / 2; gap > 0; gap /= 2) {
    for (int i = gap; i < n; i++) {
      string temp = arr[i];
      int j;
      for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
        arr[j] = arr[j - gap];
      }
      arr[j] = temp;
    }
  }
}

void printArray(string arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  const int n = 8;
  string data[n] = {"suka", "aku", "sama", "kamu", "dulu", "sampai", "dari", "sekarang"};

  cout << "Data sebelum diurutkan: ";
  printArray(data, n);

  shellSort(data, n);
  cout << "Data setelah diurutkan dengan Shell Sort: ";
  printArray(data, n);

  return 0;
}