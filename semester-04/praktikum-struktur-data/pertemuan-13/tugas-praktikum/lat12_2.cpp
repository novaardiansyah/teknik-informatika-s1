#include<iostream>
#include<stdlib.h>

using namespace std;

typedef struct node *simpul;

struct node {
  char Isi;
  simpul Next;
};

void Sisip_Belakang(simpul &L, char elemen);
void Hapus_Belakang(simpul &L);
void Cetak(simpul L);
void TampilkanMenu(simpul &L);

int main() {
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  char huruf;
  simpul L = NULL;
  cout << "Operasi Single Linked List Pada Stack\n\n";

  int pilihan;
  do {
    TampilkanMenu(L);
    cout << "Pilih operasi (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
      case 1:
        cout << "Masukkan Elemen : ";
        cin >> huruf;
        Sisip_Belakang(L, huruf);
        break;
      case 2:
        Hapus_Belakang(L);
        break;
      case 3:
        Cetak(L);
        break;
      case 0:
        cout << "Terima kasih. Program selesai.\n";
        break;
      default:
        cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        break;
    }
  } while (pilihan != 0);

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
  cout << endl;
}


void TampilkanMenu(simpul &L) {
  cout << "\nMenu:\n";
  cout << "1. Sisipkan Elemen\n";
  cout << "2. Hapus Elemen\n";
  cout << "3. Cetak List\n";
  cout << "4. Keluar\n";
}