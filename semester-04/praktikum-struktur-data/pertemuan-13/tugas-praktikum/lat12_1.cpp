#include<iostream>
#include<stdlib.h>

#define true 1
#define false 0

using namespace std;

typedef struct node *simpul;

struct node {
  char Isi;
  simpul Next;
};

void Sisip_Belakang(simpul &L, char elemen);
void Hapus_Belakang(simpul &L);
void Cetak(simpul L);

int main() {
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  char huruf;
  simpul L = NULL;
  cout << "Operasi Single Linked List Pada Stack\n\n";

  cout << "Penyisipan Stack \n\n";

  cout << "Masukkan Elemen : ";
  cin >> huruf;
  Sisip_Belakang(L, huruf);
  cout << "Masukkan Elemen : ";
  cin >> huruf;
  Sisip_Belakang(L, huruf);
  cout << "Masukkan Elemen : ";
  cin >> huruf;
  Sisip_Belakang(L, huruf);
  cout << "Masukkan Elemen : ";
  cin >> huruf;
  Sisip_Belakang(L, huruf);
  cout << "Masukkan Elemen : ";
  cin >> huruf;
  Sisip_Belakang(L, huruf);
  cout << "Masukkan Elemen : ";
  cin >> huruf;
  Sisip_Belakang(L, huruf);

  Cetak(L);

  cout << "\n\nHapus Elemen \n";
  Hapus_Belakang(L);
  Cetak(L);

  cout << "\n\nHapus Elemen \n";
  Hapus_Belakang(L);
  Cetak(L);

  cout << "\n\nHapus Elemen \n";
  Hapus_Belakang(L);
  Cetak(L);

  cout << "\n\nHapus Elemen \n";
  Hapus_Belakang(L);
  Cetak(L);

  return 0;
}

void Sisip_Belakang(simpul &L, char elemen) {
  simpul baru = (simpul) malloc(sizeof(node));
  baru->Isi = elemen;
  baru->Next = NULL;

  if (L == NULL) {
    L = baru;
  } else {
    simpul bantu = L;
    while (bantu->Next != NULL) {
      bantu = bantu->Next;
    }
    bantu->Next = baru;
  }
}

void Hapus_Belakang(simpul &L) {
  if (L == NULL) {
    cout << "List Kosong, Tidak ada yang dihapus\n";
  } else if (L->Next == NULL) {
    free(L);
    L = NULL;
  } else {
    simpul bantu = L;
    while (bantu->Next->Next != NULL) {
      bantu = bantu->Next;
    }
    simpul hapus = bantu->Next;
    bantu->Next = NULL;
    free(hapus);
  }
}

void Cetak(simpul L) {
  if (L == NULL) {
    cout << "List Kosong\n";
  } else {
    simpul bantu = L;
    cout << "\nIsi List : ";
    while (bantu->Next != NULL) {
      cout << bantu->Isi << "->";
      bantu = bantu->Next;
    }
    cout << bantu->Isi;
  }
}