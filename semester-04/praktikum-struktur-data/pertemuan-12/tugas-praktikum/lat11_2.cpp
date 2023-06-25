#include <iostream>
#include <stack>
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

  // Membalik karakter-karakter dalam stack
  stack<char> charStack;
  for (int i = 1; i <= S.Top; i++) {
    charStack.push(S.Isi[i]);
  }

  cout << "\nKarakter yang terbalik: ";
  while (!charStack.empty()) {
    cout << charStack.top();
    charStack.pop();
  }

  return 0;
}

void INITS(Stack& S)
{
  S.Top = 0;
}

void PUSH(Stack& S, char Data)
{
  if (S.Top < MaxS) {
    S.Top++;
    S.Isi[S.Top] = Data;
  } else {
    cout << "Stack Penuh";
  }
}

void CETAK(Stack S)
{
  int i;
  cout << "\nIsi Stack : ";

  if (S.Top != 0) {
    for (i = 1; i <= S.Top; i++) {
      cout << S.Isi[i] << " ";
    }
  } else {
    cout << "Stack Kosong";
  }
}

char POP(Stack& S, char& Hsl)
{
  if (S.Top != 0) {
    Hsl = S.Isi[S.Top];
    S.Top--;
  } else {
    cout << "Stack Kosong";
  }

  return Hsl;
}
