#include <iostream>
using namespace std;

int linear_search(int arr[], int key, int n);

int main()
{
  cout << "\nPertemuan-13: Tugas Latihan 01\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  const int array_size = 10;
  int array[array_size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  cout << "Array yang akan dicari adalah: ";
  for (int i = 0; i < array_size; i++)
  {
    cout << array[i] << " ";
  }

  int searching_key = 0;
  int flag = 0;

  cout << "\n\nMasukkan key yang akan dicari: ";
  cin >> searching_key;

  int result = linear_search(array, searching_key, array_size);
  if (result == -1)
  {
    cout << "Key tidak ditemukan";
  }
  else
  {
    cout << "Key ditemukan pada index " << result;
  }
  return 0;
}

int search_linear(int arr[], int key, int n)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }
  return -1;
}