#include <iostream>
using namespace std;

void SwapMembers (int items[ ], int index1, int index2)
{
  int temp;
  temp=items[index1];
  items[index1] = items [index2];
  items[index2]=temp;
}

int main()
{
  cout << "\nPertemuan-12: Tugas Latihan 03\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  int n, m;
  int numbers [] ={ 102, 21, 83, 42, 11, 10, 9, 3, 20, 27, 15, 92, 2};
  const int size = sizeof(numbers) / sizeof(numbers[0]);
  for (n = size-1; n>0; n--)
  for (m=0; m<n; m++)
  if(numbers [m] > numbers [m+1] )
  SwapMembers ( numbers, m, m+1 );
  for (n=0; n<size;n++)
  cout<< numbers[n] << ", ";
  return 0;
}