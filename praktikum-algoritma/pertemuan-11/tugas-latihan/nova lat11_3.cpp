#include <iostream>
#include<iomanip>
using namespace std;

struct Employee_str
{
  char Name[25];
  int IdNum;
};

int main()
{
  cout << "\nPertemuan-11: Tugas Latihan 03\n";
  cout << "==============================\n\n";

  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "Kelas \t: 02-TPLE011\n";
  cout << "====================\n\n";

  Employee_str employee[3];
  
  for(int loop = 0; loop < 3; loop++)
  {
  	cout<< "Enter name for employee" << (loop+1) << " : ";
  	cin.getline(employee[loop].Name, 80, '\n');

  	cout << "Enter ID #: ";
  	cin >> employee[loop].IdNum;

  	cin.ignore(80, '\n');
  }

  cout << "\nemployee data:\n";
  cout.flags(ios::left);
  cout << setw(15) << "Name" << "\tID#\n_________________\n";

  for(int loop = 0; loop < 3; loop++)
  {
  	cout << setw(15) << employee[loop].Name;
  	cout << "\t" << employee[loop].IdNum<<endl;
  }

  cout << endl;
}