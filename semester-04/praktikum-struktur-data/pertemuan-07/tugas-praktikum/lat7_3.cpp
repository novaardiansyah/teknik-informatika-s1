#include <iostream>
#include <string>
using namespace std;

void Cetak(int data[], int n)
{
  int i = 0;
  for (i = 0; i < n; i++)
  {
    cout << data[i] << " ";
  }
}

int partisi(int data[], int p, int r)
{
  int x, i, j, temp;
  x = data[p];
  i = p;
  j = r;

  while (true)
  {
    while (data[j] > x) {
      j--;
    }

    while (data[i] < x) {
      i++;
    }

    if (i < j) {
      temp = data[i];
      data[i] = data[j];
      data[j] = temp;
    } else {
      return j;
    }
  }
}

void QuickSort(int data[], int p, int r)
{
  int q;
  if (p < r) {
    q = partisi(data, p, r);
    QuickSort(data, p, q);
    QuickSort(data, q + 1, r);
  }
}

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int Nilai[20];
  int i, N;

  cout << "Masukkan banyak data : ";
  cin >> N;

  for (i = 0; i < N; i++) {
    cout << "Masukkan data ke-" << i + 1 << " : ";
    cin >> Nilai[i];
  }

  cout << endl;
  cout << "Data sebelum diurutkan : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }

  QuickSort(Nilai, 0, N - 1);
  
  cout << "\nData setelah diurutkan : ";
  Cetak(Nilai, N);

  return 0;
}
