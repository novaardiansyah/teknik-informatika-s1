#include <iostream>
using namespace std;

struct node {
  char Isi;
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
void Cetak(simpul L);

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  char huruf, huruf2;
  simpul L = NULL;

  cout << "=============== Operasi SLL ===============\n\n";

  cout << "1. Sisip Depan\n";
  cout << "==============\n\n";

  cout << "Masukkan huruf : ";
  cin >> huruf;
  Sisip_Depan(L, huruf);

  cout << "Masukkan huruf : ";
  cin >> huruf;
  Sisip_Depan(L, huruf);
  Cetak(L);

  cout << "\n\n2. Sisip Belakang\n";
  cout << "=================\n\n";

  cout << "Masukkan huruf : ";
  cin >> huruf;
  Sisip_Belakang(L, huruf);

  cout << "Masukkan huruf : ";
  cin >> huruf;
  Sisip_Belakang(L, huruf);
  Cetak(L);

  cout << "\n\n3. Sisip setelah simpul tertentu\n";
  cout << "================================\n\n";

  cout << "Masukkan huruf : ";
  cin >> huruf;

  cout << "Masukkan huruf setelah huruf " << huruf << " : ";
  cin >> huruf2;
  Sisip_Tengah1(L, huruf, huruf2);
  Cetak(L);

  cout << "\n\n4. Sisip sebelum simpul tertentu\n";
  cout << "================================\n\n";

  cout << "Masukkan huruf : ";
  cin >> huruf;
  Sisip_Tengah2(L, huruf, huruf2);
  Cetak(L);

  cout << "\n\n5. Hapus simpul depan\n";
  cout << "=====================\n\n";

  Hapus_Depan(L);
  Cetak(L);

  cout << "6. Hapus simpul belakang\n";
  cout << "========================\n\n";

  Hapus_Belakang(L);
  Cetak(L);

  cout << "\n\n7. Hapus simpul tertentu\n";
  cout << "========================\n\n";

  cout << "Masukkan huruf : ";
  cin >> huruf;

  Hapus_Tengah(L, huruf);
  Cetak(L);

  return 0;
}

void Sisip_Depan(simpul& L, char elemen)
{
  simpul baru = new node;
  baru->Isi = elemen;
  baru->Next = L;

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
  {
    bantu = bantu->Next;
  }

  if (bantu == NULL)
  {
    cout << "Simpul dengan elemen " << elemen2 << " tidak ditemukan\n";
    return;
  }

  simpul baru = new node;
  baru->Isi = elemen1;
  baru->Next = bantu->Next;

  bantu->Next = baru;
}

void Sisip_Tengah2(simpul& L, char elemen1, char elemen2)
{
  if (L == NULL)
  {
    cout << "List kosong\n";
    return;
  }

  if (L->Isi == elemen2)
  {
    Sisip_Depan(L, elemen1);
    return;
  }

  simpul bantu = L;
  while (bantu->Next != NULL && bantu->Next->Isi != elemen2)
  {
    bantu = bantu->Next;
  }

  if (bantu->Next == NULL)
  {
    cout << "Simpul dengan elemen " << elemen2 << " tidak ditemukan\n";
    return;
  }

  simpul baru = new node;
  baru->Isi = elemen1;
  baru->Next = bantu->Next;

  bantu->Next = baru;
}

void Sisip_Belakang(simpul& L, char elemen)
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
  if (L == NULL)
  {
    cout << "List kosong\n";
  }
  else
  {
    simpul bantu = L;
    while (bantu != NULL)
    {
      cout << bantu->Isi << "-->";
      bantu = bantu->Next;
    }
    cout << endl;
  }
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
  delete hapus;
}

void Hapus_Belakang(simpul& L)
{
  if (L == NULL)
  {
    cout << "List kosong\n";
    return;
  }

  if (L->Next == NULL)
  {
    delete L;
    L = NULL;
    return;
  }

  simpul bantu = L;
  while (bantu->Next->Next != NULL)
  {
    bantu = bantu->Next;
  }

  delete bantu->Next;
  bantu->Next = NULL;
}

void Hapus_Tengah(simpul& L, char elemen)
{
  if (L == NULL)
  {
    cout << "List kosong\n";
    return;
  }

  if (L->Isi == elemen)
  {
    Hapus_Depan(L);
    return;
  }

  simpul bantu = L;
  while (bantu->Next != NULL && bantu->Next->Isi != elemen)
  {
    bantu = bantu->Next;
  }

  if (bantu->Next == NULL)
  {
    cout << "Simpul dengan elemen " << elemen << " tidak ditemukan\n";
    return;
  }

  simpul hapus = bantu->Next;
  bantu->Next = hapus->Next;
  delete hapus;
}
