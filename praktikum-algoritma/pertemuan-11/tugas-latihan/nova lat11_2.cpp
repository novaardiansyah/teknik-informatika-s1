#include <iostream>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct S1
{
 char *s;
 int i ;
 struct S1 *slp;
};

int main()
{
  cout << "\nPertemuan-11: Tugas Latihan 02\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  static struct S1 a []= {
  	{"abcdef", 1, a + 1 },
  	{"ghijkl", 2, a + 2},
  	{"mnopqr", 3, a}
  };
 
 struct S1 *p = a;
 int i;
 
 cout << "a [0].s = " << a[0].s << " p-> = " << p->s << " a[2].slp->s = " << a[2].slp->s;
 cout << endl;

 for (i = 0; i < 3; i++)
 {
  cout << "--a[i].i = "<< --a[i].i;
  cout << "++a[i].s[3] = "<< ++a[i].s[3];
 }
}