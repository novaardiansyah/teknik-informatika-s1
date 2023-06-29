#include<iostream>
#include<cstdlib>

using namespace std;
typedef struct node *simpul;

struct node
{
  char isi;
  simpul next;
};

void sisipDepan (simpul &l, char elemen);
void sisipBelakang(simpul &l, char elemen);
void sisipTengah1 (simpul &l, char elemen1, char elemen2);
void sisipTengah2 (simpul &l, char elemen1, char elemen2);
void hapusDepan (simpul &l);
void hapusBelakang(simpul &l);
void hapusTengah (simpul &l, char elemen);
void cetak (simpul l);

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  char huruf, huruf2;
  simpul l = NULL;
  int menu;
  cout << "OPERASI PADA SINGLE LINKED LIST" << endl << endl;
   
    do {
      cout << "Menu : " << endl;
      cout << "1. sisip depan" << endl;
      cout << "2. sisip belakang" << endl;
      cout << "3. sisip tengah1" << endl;
      cout << "4. sisip tengah2" << endl;
      cout << "5. hapus depan" << endl;
      cout << "6. hapus belakang" << endl;
      cout << "7. hapus tengah" << endl;
      cout << "8. cetak" << endl;
      cout << "9. keluar" << endl;
      
      cout << "Pilih menu : ";
      cin     >> menu;
      cout << endl;
      
      switch(menu) {
        case 1 :
          cout << "## Masukan huruf : ";
          cin >> huruf;
          sisipDepan(l, huruf);
          cout << endl;
          break;
        case 2 :
          cout << "## Masukan huruf : ";
          cin >> huruf;
          sisipBelakang(l, huruf);
          cout << endl;
          break;
        case 3 :
          cout << "## Masukan huruf : ";
          cin >> huruf; cout << endl;
          cout << "## Disisip setelah huruf : ";
          cin  >> huruf2; cout << endl;
          sisipTengah1(l, huruf, huruf2);
          break;
        case 4 :
          cout << "## Masukan huruf : ";
          cin  >> huruf; cout << endl;
          cout << "## Disisip sebelum huruf : ";
          cin  >> huruf2; cout << endl;
          sisipTengah2(l, huruf, huruf2);
          break;
        case 5 :
          hapusDepan(l);
          cout << "## Simpul depan dihapus" << endl << endl;
          break;
        case 6 :
          hapusBelakang(l);
          cout << "## Simpul belakang dihapus" << endl << endl;
          break;
        case 7 :
          cout << "## Masukan huruf tengah yang akan dihapus : ";
          cin >> huruf;
          hapusTengah(l, huruf);
          cout << endl;
          break;
        case 8 :
          cetak(l);
          cout << endl << endl;
          break;
        case 9 :
          cout << "## Keluar program..." << endl;
          break;
      default :
        cout << "## kode salah, coba lagi" << endl << endl;
        break;
      }
    }
    
  while(menu != 9);
  return 0;
}

void sisipDepan (simpul &l, char elemen)
{
    simpul baru;
    baru = (simpul) malloc(sizeof(simpul));
    baru->isi = elemen;
    baru-> next = NULL;
    if(l == NULL)
        l = baru;
    else
    {
        baru->next = l;
        l = baru;
    }
}

//fungsi sisip setelah simpul tertentu
void sisipTengah1 (simpul &l, char elemen1, char elemen2)
{
    simpul bantu, baru;
    baru = (simpul) malloc(sizeof(simpul));
    baru->isi = elemen1;
    baru->next = NULL;
    if(l == NULL)
        cout << "List kosong............" << endl;
    else
    {
        bantu = l;
        while(bantu -> isi != elemen2) bantu = bantu -> next;
        baru -> next = bantu -> next;
        bantu -> next = baru;
    }
   
}

//fungsi sisip simpul sebelum simpul tertentu
void sisipTengah2 (simpul &l, char elemen1, char elemen2)
{
    simpul bantu, baru;
    baru = (simpul) malloc(sizeof(simpul));
    baru -> isi = elemen1;
    baru -> next = NULL;
    if(l == NULL)
        cout << "list kosong.........." << endl;
    else
    {
        bantu = l;
        while(bantu -> isi != elemen2) bantu = bantu -> next;
        baru -> next = bantu -> next;
        bantu -> next = baru;
    }
}

//fungsi simpul di belakang
void sisipBelakang(simpul &l, char elemen)
{
    simpul bantu, baru;
    baru = (simpul) malloc(sizeof(simpul));
    baru -> isi = elemen;
    baru -> next = NULL;
    if(l == NULL)
        l = baru;
    else
    {
        bantu = l;
        while(bantu -> next != NULL) bantu = bantu -> next;
        bantu -> next = baru;
    }
}

//fungis mencetak isi liked list
void cetak(simpul l)
{
    simpul bantu;
    if(l == NULL)
        cout << "Linked list kosong............." << endl;
    else
    {
        bantu = l;
        cout << "isi linked list : ";
        while(bantu -> next != NULL)
        {
            cout << bantu -> isi << "-->";
            bantu = bantu -> next;
        }
        cout << bantu -> isi;
    }
}

//funsi hapus simpul depan
void hapusDepan(simpul &l)
{
    simpul hapus;
    if(l == NULL)
        cout << "linked list kosong......" << endl;
    else
    {
        hapus = l;
        l = l -> next;
        hapus -> next == NULL;
        free(hapus);
    }
}

//fungsi hapus simpul belakang
void hapusBelakang(simpul &l)
{
  simpul bantu, hapus;
  if (l == NULL) {
    cout << "linked list kosong....... " << endl;
  } else {
    bantu = l;
    while(bantu -> next -> next != NULL) bantu = bantu -> next;
    hapus = bantu -> next;
    bantu -> next = NULL;
    free(hapus);
  }
}

void hapusTengah(simpul &l, char elemen)
{
    simpul bantu, hapus;
    if (l == NULL) {
      cout << "Linked list kosong............";
    } else {
      bantu = l;
      while(bantu -> next -> isi != elemen) bantu = bantu -> next;
      hapus = bantu -> next;
      bantu -> next = bantu -> next -> next;
      hapus -> next = NULL;
      free(hapus);
    }
}