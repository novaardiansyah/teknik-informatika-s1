#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x) {
  int l = 0, r = n-1;
  while (l <= r) {
  int mid = l + (r - l) / 2;
  if (arr[mid] == x)
    return mid;
  if (arr[mid] < x)
    l = mid + 1;
  else
    r = mid - 1;
  }
  return -1;
}

int main() 
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x;

  cout << "Deretan angka: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << "\n\nMasukkan angka yang ingin dicari: ";
  cin >> x;

  int result = binarySearch(arr, n, x);
   
  if (result == -1) {
  cout << "Nilai tidak ditemukan." << endl;
  } else {
  cout << "Nilai ditemukan pada indeks ke-" << result << endl;
  }

  return 0;
}