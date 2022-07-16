#include <iostream>
#include<string>
using namespace std;

struct karyawan {
  int i = 0, j = 0, jumlahKaryawan;
  string nama[30], status[20];
  int gaji[100];
};

int main()
{
  cout << "\nPertemuan-11: Tugas Akhir\n";
  cout << "=========================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  karyawan kr;

  cout << "Jumlah Karyawan\t: ";
  cin >> kr.jumlahKaryawan;

  while (kr.i < kr.jumlahKaryawan) {
  	cout << "Nama\t\t: ";
  	cin >> kr.nama[kr.i];
  	cout << "Gaji/bulan\t: ";
  	cin >> kr.gaji[kr.i];
  	cout << "Status\t\t: ";
  	cin >> kr.status[kr.i];

  	kr.i++;
  	cout << "--------------------------";
  	cout << endl;
  }

  cout << "Nama\tGaji/bulan\tStatus\n";
  cout << "--------------------------\n";
  while (kr.j < kr.jumlahKaryawan) {
  	cout << kr.nama[kr.j] << "\t" 
  	<< kr.gaji[kr.j] << "\t\t\t" << kr.status[kr.j];
  	kr.j++;
  	cout << endl;
  }
}