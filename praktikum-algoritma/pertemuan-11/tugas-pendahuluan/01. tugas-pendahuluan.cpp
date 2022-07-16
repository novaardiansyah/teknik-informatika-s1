#include <iostream>
#include <string>
using namespace std;

struct mahasiswa{
	string nama;
	string jurusan;
	float ipk;
};

int main()
{
  cout << "\nPertemuan-11: Tugas Pendahuluan 01\n";
  cout << "==================================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  mahasiswa mhs;

	mhs.nama    = "Nova Ardiansyah";
	mhs.jurusan = "Teknik Informatika";
	mhs.ipk     = 3.48;

  cout << "DATA MAHASISWA" << endl;
  cout << "====================\n\n";

  cout << "Nama \t: " << mhs.nama << endl;
  cout << "Jurusan \t: " << mhs.jurusan << endl;
  cout <<"IPK \t: " << mhs.ipk << endl;

  return 0;
}
