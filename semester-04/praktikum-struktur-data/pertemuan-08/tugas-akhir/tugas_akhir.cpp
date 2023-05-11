#include <iostream>
#include <string>
#include <vector>

using namespace std;

void bubbleSort(std::vector<int>& arr) {
  int n = arr.size();
  bool swapped;

for (int i = 0; i < n - 1; i++) {
    swapped = false;

    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] % 2 == 0 && arr[j + 1] % 2 != 0) {
        std::swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }

    if (!swapped) {
      break;
    }
  }
}

int main()
{
  cout << "Nama \t: Nova Ardiansyah\n";
  cout << "NIM \t: 211011401309\n";
  cout << "=========================\n\n";

  int pilihan = 1;

  string metode[5] = {
    "Maksimum Sort: Menaik",
    "Maksimum Sort: Menurun",
    "Minimum Sort: Menaik",
    "Minimum Sort: Menurun",
    "Ganjil ke genap: Menaik (Tambahan)"
  };

  for (int i = 0; i < 5; i++) {
    cout << i + 1 << ". " << metode[i] << endl;
  }

  cout << "\nPilih metode pengurutan: ";
  cin >> pilihan;

  cout << "===========================\n\n";

  if (pilihan == 1) {
    cout << "Pilihan tidak tersedia!";
  } else if (pilihan == 2) {
    cout << "Pilihan tidak tersedia!";
  } else if (pilihan == 3) {
    cout << "Pilihan tidak tersedia!";
  } else if (pilihan == 4) {
    cout << "Pilihan tidak tersedia!";
  } else if (pilihan == 5) {
    vector<int> numbers = {5, 2, 7, 10, 8, 3, 6, 1, 4, 9};

    // * Data sebelum diuruskan
    cout << "Data sebelum diurutkan : ";
    for (int i = 0; i < numbers.size(); i++) {
      cout << numbers[i] << " ";
    }

    bubbleSort(numbers);

    // * Data setelah diurutkan
    cout << "\nData setelah diurutkan : ";

    for (int number : numbers) {
      cout << number << " ";
    }
  } else {
    cout << "Pilihan tidak tersedia!";
  }

  return 0;
}