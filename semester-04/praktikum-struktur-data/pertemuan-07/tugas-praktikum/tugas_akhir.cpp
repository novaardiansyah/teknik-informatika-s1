#include <iostream>
using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";
  
  int arr[] = {34, 12, 56, 78, 6, 43, 32, 29, 90, 50, 55, 75, 85, 95, 25};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Array sebelum diurutkan: ";
  for (int i = 0; i < n - 1;i++) {
    cout << arr[i] << " ";
  }

  // * Bubble Sort
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  cout << "\nArray yang sudah diurutkan: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
