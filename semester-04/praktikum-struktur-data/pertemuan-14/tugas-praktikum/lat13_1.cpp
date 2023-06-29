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

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  char huruf;
  simpul L = NULL;
  int i;

  cout << "== Operasi pada Single Linked List ==" << endl;

  cout << "\nPenyisipan Simpul\n\n";
  for (i = 1; i <= 3; i++)
  {
    cout << "Masukkan huruf : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
  }
  Cetak(L);

  cout << "\nSetelah Hapus Simpul\n";
  Hapus_Depan(L);
  Cetak(L);

  cout << "\nSetelah Hapus Simpul\n";
  Hapus_Depan(L);
  Cetak(L);

  cout << "\nSetelah Hapus Simpul\n";
  Hapus_Depan(L);
  Cetak(L);

  cout << "\nPenyisipan Simpul\n\n";
  for (i = 1; i <= 3; i++)
  {
    cout << "Masukkan huruf : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
  }
  Cetak(L);

  cout << "\nSetelah Hapus Simpul\n";
  Hapus_Depan(L);
  Cetak(L);

  cout << "\nSetelah Hapus Simpul\n";
  Hapus_Depan(L);
  Cetak(L);

  return 0;
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

