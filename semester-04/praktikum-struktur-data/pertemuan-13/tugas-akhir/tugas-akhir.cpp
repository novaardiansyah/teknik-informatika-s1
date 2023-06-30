#include<iostream>
#include<string>

using namespace std;

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";
  
  string kalimat;
  cout << "Masukkan Kalimat : ";
  getline(cin, kalimat);
  
  int len = kalimat.length();
  bool flag = true;
  
  for(int i = 0, j = len - 1; i < len / 2; ++i, --j)
  {
    if(kalimat[j] != kalimat[i])
    {
      flag = false;
      break;
    }
  }

  cout << "\nKata Setelah Dibalik: ";
  for(int i = len - 1; i >= 0; --i)
  {
    cout << kalimat[i];
  }
  
  if(flag)
    cout << "\nKalimat Ini adalah Kalimat Palindrome";
  else
    cout << "\nKalimat Ini Bukan Kalimat Palindrome";

  return 0;
}

