#include <iostream>
#include <string>

using namespace std;
void cariNilaiTerkecil(int *arr, int n);

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int arr[] = {5, 8, 1, 10, 3, 7, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  cariNilaiTerkecil(arr, n);

  return 0;
}

void cariNilaiTerkecil(int *arr, int n)
{
  int nilaiTerkecil = *arr;

  cout << "Nilai yang akan dicari adalah: ";
  for (int i = 1; i < n; i++)
  {
    cout << *(arr + i) << " ";
    if (*(arr + i) < nilaiTerkecil)
    {
      nilaiTerkecil = *(arr + i);
    }
  }

  cout << endl;
  cout << "Nilai terkecil dalam array adalah: ";
  cout << nilaiTerkecil << endl;
}
