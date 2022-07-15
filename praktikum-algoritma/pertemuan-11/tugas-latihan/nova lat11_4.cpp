#include <iostream>
#include <string>
using namespace std;

struct siswa {
	string nama, alamat, jk;
	int tlp;
	char tanya;
};

int main ()
{
  cout << "\nPertemuan-11: Tugas Latihan 04\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  siswa sw;
 
  lagi:
  cout<<"Masukkan Nama\t\t: ";cin>>sw.nama;
  cout<<"Masukkan Alamat\t\t: ";cin>>sw.alamat;
  cout<<"Masukkan Jk\t\t\t: ";cin>>sw.jk;
  cout<<"Masukkan Telepon\t: ";cin>>sw.tlp;

  cout << "========================" << endl;

  cout<<"\n*Mahasiswa :\n";
  cout<<"Nama\t\t\t: "<<sw.nama;
  cout<<"\nAlamat\t\t\t: "<<sw.alamat;
  cout<<"\nJenis Kelamin\t: "<<sw.jk;
  cout<<"\nTelepon\t\t\t: 0"<<sw.tlp;

  cout<<"\n\nMau tambah data lagi ? [Y/N]\t: ";cin>>sw.tanya;
  cout<<endl;

  if(sw.tanya == 'Y'){
  	goto lagi;
  } else if (sw.tanya == 'N'){
  	return 0;
  }
}