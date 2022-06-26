#include <iostream>
#include <string.h>
using namespace std;

void prog();

int main()
{
  cout << "\nPertemuan-09: Tugas Latihan 07\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  prog();
}

void prog()
{
  char *entry, letter, choice[2];
  int ascii, len, binary[8], total;

  entry = new char[501];
  cout << "Masukkan kalimat: ";
  cin.getline(entry, 500);

  len = strlen(entry);

  for (int i = 0; i < len; i++)
  {
    total = 0;
    letter = entry[i];
    ascii = letter;

    while (ascii > 0)
    {
      if (ascii % 2 == 0)
      {
        binary[total] = 0;
        ascii = ascii / 2;
        total++;
      }
      else
      {
        binary[total] = 1;
        ascii = ascii / 2;
        total++;
      }
    }
    total--;

    while (total >= 0)
    {
      cout << binary[total];
      total--;
    }
  }

  delete[] entry;
  cout << "\n\nApakah anda ingin mengulang? (y/n) ";
  cin.getline(choice, 3);

  if (choice[0] == 'y')
  {
    prog();
  }
  else
  {
    exit(0);
  }
}