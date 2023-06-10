#include <iostream>
using namespace std;

#define MaxS 10

struct Stack {
  char Isi[MaxS];
  int Top;
};

void INITS(Stack& S);
void PUSH(Stack& S, char Data);
void CETAK(Stack S);
char POP(Stack& S, char& Hsl);

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  char huruf;
  Stack S;
  INITS(S);

  cout << "Masukkan Karakter : ";
  cin >> huruf;
  PUSH(S, huruf);

  cout << "Masukkan Karakter : ";
  cin >> huruf;
  PUSH(S, huruf);

  cout << "Masukkan Karakter : ";
  cin >> huruf;
  PUSH(S, huruf);

  CETAK(S);
  POP(S, huruf);

  cout << "\nYang dihapus ... : " << huruf << endl;
  CETAK(S);

  cout << "\nMasukkan Karakter : ";
  cin >> huruf;
  PUSH(S, huruf);

  cout << "Masukkan Karakter : ";
  cin >> huruf;
  PUSH(S, huruf);

  cout << "Masukkan Karakter : ";
  cin >> huruf;
  PUSH(S, huruf);

  CETAK(S);
  POP(S, huruf);

  cout << "\nYang dihapus ... : " << huruf << endl;
  CETAK(S);

  return 0;
}

void INITS(Stack& S)
{
  S.Top = -1;
}

void PUSH(Stack& S, char Data)
{
  if (S.Top < MaxS - 1) {
    S.Top++;
    S.Isi[S.Top] = Data;
  }
  else {
    cout << "Stack Penuh";
  }
}

void CETAK(Stack S)
{
  int i;
  cout << "\nIsi Stack : ";

  if (S.Top != -1) {
    for (i = 0; i <= S.Top; i++) {
      cout << S.Isi[i] << " ";
    }
  }
  else {
    cout << "Stack Kosong";
  }
}

char POP(Stack& S, char& Hsl)
{
  if (S.Top != -1) {
    Hsl = S.Isi[S.Top];
    S.Top--;
  }
  else {
    cout << "Stack Kosong";
  }

  return Hsl;
}
