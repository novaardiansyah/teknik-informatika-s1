#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa
{
  char NIM[30];
  char Nama[25];
  int NilaiTugas;
  int NilaiUTS;
  int NilaiUAS;
  int NilaiAkhir;
  string NilaiHuruf;
};

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  Mahasiswa Mhs;

  cout << "Masukkan NIM \t\t\t: ";
  cin.getline(Mhs.NIM, 30);

  cout << "Masukkan Nama \t\t\t: ";
  cin.getline(Mhs.Nama, 25);

  cout << "Masukkan Nilai Tugas \t: ";
  cin >> Mhs.NilaiTugas;

  cout << "Masukkan Nilai UTS \t\t: ";
  cin >> Mhs.NilaiUTS;

  cout << "Masukkan Nilai UAS \t\t: ";
  cin >> Mhs.NilaiUAS;

  cout << "=========================\n\n";

  Mhs.NilaiAkhir = (Mhs.NilaiTugas * 0.2) + (Mhs.NilaiUTS * 0.35) + (Mhs.NilaiUAS * 0.45);

  if (Mhs.NilaiAkhir > 85 && Mhs.NilaiAkhir <= 100) {
    Mhs.NilaiHuruf = "A";
  } else if (Mhs.NilaiAkhir > 70 && Mhs.NilaiAkhir <= 85) {
    Mhs.NilaiHuruf = "B";
  } else if (Mhs.NilaiAkhir > 55 && Mhs.NilaiAkhir <= 70) {
    Mhs.NilaiHuruf = "C";
  } else if (Mhs.NilaiAkhir > 40 && Mhs.NilaiAkhir <= 55) {
    Mhs.NilaiHuruf = "D";
  } else if (Mhs.NilaiAkhir <= 40) {
    Mhs.NilaiHuruf = "E";
  }

  cout << "Berikut adalah hasil perhitungan nilai akhir Anda :\n\n";
  
  cout << "NIM \t\t\t: " << Mhs.NIM << endl;
  cout << "Nama \t\t\t: " << Mhs.Nama << endl;
  cout << "Nilai Tugas \t: " << Mhs.NilaiTugas << endl;
  cout << "Nilai UTS \t\t: " << Mhs.NilaiUTS << endl;
  cout << "Nilai UAS \t\t: " << Mhs.NilaiUAS << endl;
  cout << "Nilai Akhir \t: " << Mhs.NilaiAkhir << endl;
  cout << "Peringkat \t\t: " << Mhs.NilaiHuruf << endl;

  return 0;
}