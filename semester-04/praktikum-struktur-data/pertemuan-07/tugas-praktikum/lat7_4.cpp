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

void pilihan1()
{
  int Nilai[20];
  int i, j, k, N;
  int temp;
  bool tukar;

  cout << "Masukkan banyak data : ";
  cin >> N;

  for (i = 0; i < N; i++) {
    cout << "Masukkan data ke-" << i + 1 << " : ";
    cin >> Nilai[i];
  }

  cout << endl;
  cout << "Data sebelum diurutkan : ";
  for (i = 0; i < N; i++)
  {
    cout << Nilai[i] << " ";
  }

  i = 0;
  for (j = N -1; j >= 0; j--)
  {
    tukar = false;
    for (k = 0; k < j; k++) {
      if (Nilai[k] > Nilai[k + 1]) {
        temp = Nilai[k];
        Nilai[k] = Nilai[k + 1];
        Nilai[k + 1] = temp;
        tukar = true;
      }
    }
    
    if (tukar == false) {
      break;
    }
    
    cout << endl;
    i++;
  }

  cout << "Data setelah diurutkan : ";
  for (i = 0; i < N; i++)
  {
    cout << Nilai[i] << " ";
  }
}

void pilihan2()
{
  int Nilai[20];
  int i, j, k, N;
  int temp;
  bool tukar;

  cout << "Masukkan banyak data : ";
  cin >> N;

  for (i = 0; i < N; i++) {
    cout << "Masukkan data ke-" << i + 1 << " : ";
    cin >> Nilai[i];
  }

  cout << endl;
  cout << "Data sebelum diurutkan : ";
  for (i = 0; i < N; i++)
  {
    cout << Nilai[i] << " ";
  }

  i = 0;
  for (j = N -1; j >= 0; j--)
  {
    tukar = false;
    for (k = 0; k < j; k++) {
      if (Nilai[k] < Nilai[k + 1]) {
        temp = Nilai[k];
        Nilai[k] = Nilai[k + 1];
        Nilai[k + 1] = temp;
        tukar = true;
      }
    }
    
    if (tukar == false) {
      break;
    }
    
    i++;
  }

  cout << "\nData setelah diurutkan : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }
}

void pilihan3()
{
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
}

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int pilihan;

  cout << "Pilih metode pengurutan data: \n";
  cout << "1. Bubble Sort Menaik\n";
  cout << "2. Bubble Sort Menurun\n";
  cout << "3. Quick Sort Menaik\n";

  cout << "Pilihan: ";
  cin >> pilihan;

  switch (pilihan)
  {
  case 1:
    cout << "\n====== 1. Bubble Sort Menaik ======\n\n";
    pilihan1();
    break;
  case 2:
    cout << "\n====== 2. Bubble Sort Menurun ======\n\n";
    pilihan2();
    break;
  case 3:
    cout << "\n====== 3. Quick Sort Menaik ======\n\n";
    pilihan3();
    break;
  default:
    cout << "\n====== Pilihan tidak tersedia ======\n\n";
    break;
  }

  return 0;
}
