#include <iostream>

const int N = 10;

void Baca(int Nilai[], int M);
void Cetak(int Nilai[], int M);
void Jumlah(int Nilai[], int M, int &jml, float &rata);

using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int Nilai[N], M, jml;
  float rata;

  cout << "Masukkan banyaknya data: ";
  cin >> M;

  Baca(Nilai, M);
  Cetak(Nilai, M);
  Jumlah(Nilai, M, jml, rata);

  return 0;
}

void Baca(int Nilai[], int M) {
  cout << "Masukkan " << M << " elemen array: ";
  for (int i = 0; i < M; i++) {
    cin >> Nilai[i];
  }
}

void Cetak(int Nilai[], int M) {
  cout << "Elemen-elemen array: ";
  for (int i = 0; i < M; i++) {
    cout << Nilai[i] << " ";
  }

  cout << endl;
}

void Jumlah(int Nilai[], int M, int &jml, float &rata) {
  jml = 0;
  for (int i = 0; i < M; i++) {
    jml = jml + Nilai[i];
  }

  rata = static_cast<float>(jml) / M;
  cout << "Jumlah elemen array: " << jml << endl;
  cout << "Rata-rata elemen array: " << rata << endl;
}

