#include <iostream>
using namespace std;

typedef struct node *simpul;
struct node
{
  char Isi;
  simpul Next;
};

void Sisip_Belakang(simpul &L, char elemen);
void Hapus_Depan(simpul &L);
void Cetak(simpul L);
void Menu(simpul &L);

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  simpul L = NULL;

  cout << "== Operasi pada Single Linked List ==" << endl;

  Menu(L);

  return 0;
}

void Menu(simpul &L)
{
  int pilihan;
  char huruf;

  while (true)
  {
    cout << "\nMenu Pilihan:" << endl;
    cout << "1. Sisipkan huruf" << endl;
    cout << "2. Hapus huruf dari depan" << endl;
    cout << "3. Cetak linked list" << endl;
    cout << "4. Keluar" << endl;
    cout << "Pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
      cout << "Masukkan huruf: ";
      cin >> huruf;
      Sisip_Belakang(L, huruf);
      break;
    case 2:
      Hapus_Depan(L);
      break;
    case 3:
      Cetak(L);
      break;
    case 4:
      return;
    default:
      cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
      break;
    }
  }
}

void Sisip_Belakang(simpul &L, char elemen)
{
  simpul baru = new node;
  baru->Isi = elemen;
  baru->Next = NULL;

  if (L == NULL)
  {
    L = baru;
  }
  else
  {
    simpul bantu = L;
    while (bantu->Next != NULL)
    {
      bantu = bantu->Next;
    }
    bantu->Next = baru;
  }
}

void Cetak(simpul L)
{
  simpul bantu = L;
  if (L == NULL)
  {
    cout << "Linked List kosong....." << endl;
  }
  else
  {
    cout << "\nIsi Linked List : ";
    while (bantu != NULL)
    {
      cout << bantu->Isi << "->";
      bantu = bantu->Next;
    }
  }
}

void Hapus_Depan(simpul &L)
{
  if (L == NULL)
  {
    cout << "Linked List kosong....." << endl;
  }
  else
  {
    simpul Hapus = L;
    L = L->Next;
    Hapus->Next = NULL;
    delete Hapus;
  }
}