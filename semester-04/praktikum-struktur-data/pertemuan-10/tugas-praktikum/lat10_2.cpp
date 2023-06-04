#include <iostream>
#include <string>
using namespace std;

struct node {
  char Isi;
  node* Prev;
  node* Next;
};

typedef node* simpul;

void Sisip_Depan(simpul& L, char elemen);
void Sisip_Belakang(simpul& L, char elemen);
void Sisip_Tengah1(simpul& L, char elemen1, char elemen2);
void Sisip_Tengah2(simpul& L, char elemen1, char elemen2);
void Hapus_Depan(simpul& L);
void Hapus_Belakang(simpul& L);
void Hapus_Tengah(simpul& L, char elemen);
void Cetak_Maju(simpul L);
void Cetak_Mundur(simpul L);

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  char huruf, huruf2;
  simpul L = NULL;

  cout << "=============== Operasi Double Linked List ===============\n";

  cout << "\n\n1. Sisip Depan\n";
  cout << "==============\n\n";

  cout << "Masukkan huruf : ";
  cin >> huruf;
  Sisip_Depan(L, huruf);
  cin >> huruf;
  Sisip_Depan(L, huruf);
  Cetak_Maju(L);
  Cetak_Mundur(L);

  cout << "\n\n2. Sisip Belakang\n";
  cout << "=================\n\n";

  cout << "Masukkan huruf : ";
  cin >> huruf;
  Sisip_Belakang(L, huruf);

  cout << "Masukkan huruf : ";
  cin >> huruf;
  Sisip_Belakang(L, huruf);

  Cetak_Maju(L);
  Cetak_Mundur(L);

  cout << "\n\n3. Sisip setelah simpul tertentu\n";
  cout << "================================\n\n";

  cout << "Masukkan huruf : ";
  cin >> huruf;

  cout << "Masukkan huruf setelah huruf " << huruf << " : ";
  cin >> huruf2;
  Sisip_Tengah1(L, huruf, huruf2);

  Cetak_Maju(L);
  Cetak_Mundur(L);

  cout << "\n\n4. Sisip sebelum simpul tertentu\n";
  cout << "================================\n\n";

  cout << "Masukkan huruf : ";
  cin >> huruf;
  Sisip_Tengah2(L, huruf, huruf2);

  Cetak_Maju(L);
  Cetak_Mundur(L);

  cout << "\n\n5. Hapus simpul depan\n";
  cout << "=====================\n\n";

  Hapus_Depan(L);
  Cetak_Maju(L);
  Cetak_Mundur(L);

  cout << "\n\n6. Hapus simpul belakang\n";
  cout << "========================\n\n";

  Hapus_Belakang(L);
  Cetak_Maju(L);
  Cetak_Mundur(L);

  cout << "\n\n7. Hapus simpul tertentu\n";
  cout << "========================\n\n";

  cout << "Masukkan huruf : ";
  cin >> huruf;

  Hapus_Tengah(L, huruf);
  Cetak_Maju(L);
  Cetak_Mundur(L);

  return 0;
}

// FUNCTION

void Sisip_Depan(simpul& L, char elemen)
{
  simpul baru = new node;
  baru->Isi = elemen;
  baru->Prev = NULL;
  baru->Next = L;

  if (L != NULL)
    L->Prev = baru;

  L = baru;
}

void Sisip_Tengah1(simpul& L, char elemen1, char elemen2)
{
  if (L == NULL)
  {
    cout << "List kosong\n";
    return;
  }

  simpul bantu = L;
  while (bantu != NULL && bantu->Isi != elemen2)
    bantu = bantu->Next;

  if (bantu == NULL)
  {
    cout << "Simpul dengan elemen " << elemen2 << " tidak ditemukan\n";
    return;
  }

  simpul baru = new node;
  baru->Isi = elemen1;
  baru->Prev = bantu;
  baru->Next = bantu->Next;

  if (bantu->Next != NULL)
    bantu->Next->Prev = baru;

  bantu->Next = baru;
}

void Sisip_Tengah2(simpul& L, char elemen1, char elemen2)
{
  if (L == NULL)
  {
    cout << "List kosong\n";
    return;
  }

  simpul bantu = L;
  while (bantu != NULL && bantu->Isi != elemen2)
    bantu = bantu->Next;

  if (bantu == NULL)
  {
    cout << "Simpul dengan elemen " << elemen2 << " tidak ditemukan\n";
    return;
  }

  simpul baru = new node;
  baru->Isi = elemen1;
  baru->Prev = bantu->Prev;
  baru->Next = bantu;

  if (bantu->Prev != NULL)
    bantu->Prev->Next = baru;
  else
    L = baru;

  bantu->Prev = baru;
}

void Sisip_Belakang(simpul& L, char elemen)
{
  simpul baru = new node;
  baru->Isi = elemen;
  baru->Prev = NULL;
  baru->Next = NULL;

  if (L == NULL)
  {
    L = baru;
    return;
  }

  simpul bantu = L;
  while (bantu->Next != NULL)
    bantu = bantu->Next;

  bantu->Next = baru;
  baru->Prev = bantu;
}

void Hapus_Depan(simpul& L)
{
  if (L == NULL)
  {
    cout << "List kosong\n";
    return;
  }

  simpul hapus = L;
  L = L->Next;

  if (L != NULL)
    L->Prev = NULL;

  delete hapus;
}

void Hapus_Belakang(simpul& L)
{
  if (L == NULL)
  {
    cout << "List kosong\n";
    return;
  }

  simpul bantu = L;
  while (bantu->Next != NULL)
    bantu = bantu->Next;

  if (bantu->Prev != NULL)
    bantu->Prev->Next = NULL;
  else
    L = NULL;

  delete bantu;
}

void Hapus_Tengah(simpul& L, char elemen)
{
  if (L == NULL)
  {
    cout << "List kosong\n";
    return;
  }

  simpul bantu = L;
  while (bantu != NULL && bantu->Isi != elemen)
    bantu = bantu->Next;

  if (bantu == NULL)
  {
    cout << "Simpul dengan elemen " << elemen << " tidak ditemukan\n";
    return;
  }

  if (bantu->Prev != NULL)
    bantu->Prev->Next = bantu->Next;
  else
    L = bantu->Next;

  if (bantu->Next != NULL)
    bantu->Next->Prev = bantu->Prev;

  delete bantu;
}

void Cetak_Maju(simpul L)
{
  cout << "Cetak maju: ";
  simpul bantu = L;
  while (bantu != NULL)
  {
    cout << bantu->Isi << "-->";
    bantu = bantu->Next;
  }
  cout << endl;
}

void Cetak_Mundur(simpul L)
{
  cout << "Cetak mundur: ";
  simpul bantu = L;
  while (bantu != NULL && bantu->Next != NULL)
    bantu = bantu->Next;

  while (bantu != NULL)
  {
    cout << bantu->Isi << "-->";
    bantu = bantu->Prev;
  }
  cout << endl;
}