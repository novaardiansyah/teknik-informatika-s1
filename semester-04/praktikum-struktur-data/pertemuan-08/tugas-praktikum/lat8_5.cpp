#include <iostream>
#include <string>
using namespace std;

void maximumSort(bool ascending = true)
{
  int Nilai[20];
  int i, j, N, l;
  int temp, U, lmaks;

  cout << "Masukkan banyaknya bilangan : ";
  cin >> N;

  for (i = 0; i < N; i++) {
    cout << "Masukkan nilai ke-" << i + 1 << " : ";
    cin >> Nilai[i];
  }

  // * Proses Cetak Sebelum Diurutkan
  cout << "\nData sebelum diurutkan : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }

  // * Proses Pengurutan
  if (ascending == true) {
    U = N - 1;
    for (i = 0; i <= N - 2; i++) {
      lmaks = 0;

      for (j = 1; j <= U; j++) {
        if (Nilai[j] > Nilai[lmaks]) {
          lmaks = j;
        }
      }

      temp = Nilai[U];
      Nilai[U] = Nilai[lmaks];
      Nilai[lmaks] = temp;
      U--;
    }
  } else {
    U = N - 1;
    for (i = 0; i <= N - 2; i++) {
      lmaks = 0;

      for (j = 1; j <= U; j++) {
        if (Nilai[j] < Nilai[lmaks]) {
          lmaks = j;
        }
      }

      temp = Nilai[U];
      Nilai[U] = Nilai[lmaks];
      Nilai[lmaks] = temp;
      U--;
    }
  }

  cout << "\nData setelah diurutkan : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }
}

void minimumSort(bool ascending = true) 
{
  int Nilai[20];
  int i, j, N, l;
  int temp, lmin;

  cout << "Masukkan banyaknya bilangan : ";
  cin >> N;

  for (i = 0; i < N; i++) {
    cout << "Masukkan nilai ke-" << i + 1 << " : ";
    cin >> Nilai[i];
  }

  // * Proses Cetak Sebelum Diurutkan
  cout << "\nData sebelum diurutkan : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }

  // * Proses Pengurutan
  if (ascending == true) {
    for (i = 0; i < N-1; i++) {
      lmin = i;

      for (j = i + 1; j < N; j++) {
        if (Nilai[j] < Nilai[lmin]) {
          lmin=j;
        }
      }

      temp = Nilai[i];
      Nilai[i] = Nilai[lmin];
      Nilai[lmin] = temp;
    }
  } else {
    for (i = 0; i < N-1; i++) {
      lmin = i;

      for (j = i + 1; j < N; j++) {
        if (Nilai[j] > Nilai[lmin]) {
          lmin=j;
        }
      }

      temp = Nilai[i];
      Nilai[i] = Nilai[lmin];
      Nilai[lmin] = temp;
    }
  }

  cout << "\nData setelah diurutkan : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }
}

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int pilihan = 1;

  string metode[4] = {
    "Maksimum Sort: Menaik",
    "Maksimum Sort: Menurun",
    "Minimum Sort: Menaik",
    "Minimum Sort: Menurun"
  };

  for (int i = 0; i < 4; i++) {
    cout << i + 1 << ". " << metode[i] << endl;
  }

  cout << "\nPilih metode pengurutan: ";
  cin >> pilihan;

  cout << "===========================\n\n";

  if (pilihan == 1) {
    maximumSort(true);
  } else if (pilihan == 2) {
    maximumSort(false);
  } else if (pilihan == 3) {
    minimumSort(true);
  } else if (pilihan == 4) {
    minimumSort(false);
  } else {
    cout << "Pilihan tidak tersedia!";
  }

  return 0;
}
