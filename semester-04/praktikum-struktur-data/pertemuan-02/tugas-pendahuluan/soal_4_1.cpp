#include <iostream>
#include <string>

using namespace std;

int main() 
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int array3D[2][3][4] = {
    {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12}
    },
    {
      {13, 14, 15, 16},
      {17, 18, 19, 20},
      {21, 22, 23, 24}
    }
  };
  
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 4; k++) {
        cout << array3D[i][j][k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }
  
  return 0;
}
