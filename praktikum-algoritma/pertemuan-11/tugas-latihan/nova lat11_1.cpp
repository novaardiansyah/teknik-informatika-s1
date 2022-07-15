#include <iostream>
#include<string.h>
#include <stdlib.h>
using namespace std;

struct movies_t
{
  char title[50];
  int year;
}

mine, yours;
void printfmovie (movies_t movie);

int main()
{
  cout << "\nPertemuan-11: Tugas Latihan 01\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  char buffer [50];
  strcpy (mine.title, "2001 A Space Odyssey");
  mine.year = 1968;

  cout << "Masukkan judul film favorit: ";
  cin.getline (yours.title,50);

  cout << "Masukkan tahun rilis: ";
  cin.getline (buffer, 50);
  
  yours.year = atoi (buffer);
  cout << "Judul film favorit yang ada:\n ";

  printfmovie (mine);
  cout << "\nJudul film favorit kamu adalah :\n ";
  printfmovie (yours);
}

void printfmovie (movies_t movie)
{
  cout<< movie.title;
  cout<<" ( " << movie.year << ") \n";
}