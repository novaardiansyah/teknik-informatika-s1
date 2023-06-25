#include <iostream>
#include <conio.h>
#include <stdlib.h>

#define true 1
#define false 0

using namespace std;

typedef struct node *simpul;

struct node
{
  char Isi;
  simpul kanan;
  simpul kiri;
};

void Sisip_Depan (simpul &DL, char elemen);
void Sisip_Belakang (simpul &DL, char elemen);
void Sisip_Tengah1 (simpul &DL, char elemen1, char elemen2);
void Sisip_Tengah2 (simpul &DL, char elemen1, char elemen2);
void Hapus_Depan (simpul &DL);
void Hapus_Belakang (simpul &DL);
void Hapus_Tengah (simpul &DL, char elemen);
void Cetak (simpul DL);

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  char huruf, huruf2;
  simpul DL = NULL;
  int i;

  cout << "Operasi Pada Double Linked List\n\n";

  cout << "Penyisipan Simpul Di Depan\n\n";
  for (i = 1; i <= 4; i++) {
    cout << "Masukkan huruf : ";
    cin >> huruf;
    Sisip_Depan(DL, huruf);
  }
  Cetak(DL);

  cout << "\n\nPenyisipan Simpul Di Belakang\n\n";
  for (i = 1; i <= 4; i++) {
    cout << "Masukkan huruf : ";
    cin >> huruf;
    Sisip_Belakang(DL, huruf);
  }
  Cetak(DL);

  // * Sisip simpul setelah simpul
  cout << "\n\nPenyisipan Simpul Setelah Simpul Tertentu\n\n";
  cout << "Masukkan Huruf : ";
  cin >> huruf;

  cout << "Sisipkan Setelah Huruf : ";
  cin >> huruf2;

  cout << huruf << "Disisipkan setalah " << huruf2 << endl;
  Sisip_Tengah1(DL, huruf, huruf2);

  Cetak(DL);

  //  * Sisip simpul sebelum simpul
  cout << "\n\nPenyisipan Simpul Sebelum Simpul Tertentu\n\n";
  cout << "Masukkan Huruf : ";
  cin >> huruf;

  cout << "Sisipkan Sebelum Huruf : ";
  cin >> huruf2;

  cout << huruf << "Disisipkan Sebelum " << huruf2 << endl;
  Sisip_Tengah2(DL, huruf, huruf2);

  Cetak(DL);

  // * Hapus simpul belakang
  cout << "Setelah Hapus Simpul Belakang\n\n";
  Hapus_Belakang(DL);
  Cetak(DL);

  // * Hapus simpul tengah
  cout << "\n\nMasukkan huruf tengah yang akan dihapus : ";
  cin>>huruf;
  Hapus_Tengah(DL, huruf);
  Cetak(DL);

  return 0;
}

void Sisip_Depan (simpul &DL, char elemen)
{
  simpul baru;
  baru = (simpul) malloc (sizeof(simpul));
  baru->Isi = elemen;
  baru->kanan = NULL;
  baru->kiri = NULL;

  if (DL == NULL) {
    DL = baru;
  } else {
    baru->kanan = DL;
    DL->kiri = baru;
    DL = baru;
  }
}

void Sisip_Tengah1(simpul &DL, char elemen1, char elemen2)
{
  simpul bantu, baru;
  baru = (simpul) malloc(sizeof(node));
  baru->Isi = elemen1;
  baru->kanan = NULL;
  baru->kiri = NULL;

  if (DL == NULL) {
    cout << "List Kosong.........\n";
  } else {
    bantu = DL;
    while (bantu->Isi != elemen2) {
      bantu = bantu->kanan;
    }
    baru->kanan = bantu->kanan;
    baru->kiri = bantu;
    bantu->kanan->kiri = baru;
    bantu->kanan = baru;
  }
}

void Sisip_Tengah2(simpul &DL, char elemen1, char elemen2)
{
  simpul bantu, baru;
  baru = (simpul) malloc(sizeof(node));
  baru->Isi = elemen1;
  baru->kanan = NULL;
  baru->kiri = NULL;

  if (DL == NULL) {
    cout << "List Kosong.........\n";
  } else {
    bantu = DL;
    while (bantu->kanan->Isi != elemen2) {
      bantu = bantu->kanan;
    }
    baru->kanan = bantu->kanan;
    baru->kiri = bantu;
    bantu->kanan->kiri = baru;
    bantu->kanan = baru;
  }
}

void Sisip_Belakang(simpul &DL, char elemen)
{
  simpul bantu, baru;
  baru = (simpul) malloc(sizeof(simpul));
  baru->Isi = elemen;
  baru->kanan = NULL;
  baru->kiri = NULL;

  if (DL == NULL) {
    DL = baru;
  } else {
    bantu = DL;
    while (bantu->kanan != NULL) {
      bantu = bantu->kanan;
    }
    bantu->kanan = baru;
    baru->kiri = bantu;
  }
}


void Cetak(simpul DL)
{
  simpul bantu;
  if (DL == NULL) {
    cout << "List Kosong.........\n";
  } else {
    bantu = DL;
    cout << "Isi linked list : ";
    while (bantu->kanan != NULL) {
      cout << bantu->Isi << "<= =>";
      bantu = bantu->kanan;
    }
    cout << bantu->Isi;
  }
}

void Hapus_Depan(simpul &DL)
{
  simpul hapus;
  if (DL == NULL) {
    cout << "List Kosong.........\n";
  } else {
    hapus = DL;
    DL = DL->kanan;
    DL->kiri = NULL;
    hapus->kanan = NULL;
    free(hapus);
  }
}

void Hapus_Belakang(simpul &DL)
{
  simpul bantu, hapus;
  
  if (DL == NULL) {
    cout << "List Kosong.........\n";
  } else {
    bantu = DL;
    while (bantu->kanan->kanan != NULL) bantu = bantu->kanan;
    hapus = bantu->kanan;
    bantu->kanan = NULL;
    hapus->kiri = NULL;
    free(hapus);
  }
}

void Hapus_Tengah(simpul &DL, char elemen)
{
  simpul bantu, hapus;
  
  if (DL == NULL) {
    cout << "List Kosong.........\n";
  } else {
    bantu = DL;
    while (bantu->kanan->Isi != elemen)
    bantu = bantu->kanan;
    hapus = bantu->kanan;
    bantu->kanan->kanan->kiri = bantu;
    bantu->kanan = bantu->kanan->kanan;
    hapus->kanan = NULL;
    hapus->kiri = NULL;
    free(hapus);
  }
}
