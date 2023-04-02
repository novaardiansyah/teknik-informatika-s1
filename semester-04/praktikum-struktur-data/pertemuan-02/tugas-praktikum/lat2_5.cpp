#include <iostream>
using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";
  
  int Nilai[3][4] = {{1, 3, 4, 5}, {2, 4, 6, 8}, {3, 5, 7, 9}};

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << Nilai[i][j] << " ";
    }
    cout << endl;
  }
}