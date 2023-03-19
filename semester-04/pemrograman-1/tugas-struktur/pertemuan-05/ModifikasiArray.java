import java.util.Scanner;
import java.util.Arrays;

public class ModifikasiArray {
  public static void main(String[] args) {
    System.out.println("\nNama : Nova Ardiansyah");
    System.out.println("NIM  : 211011401309");
    System.out.println("Kelas: 04TPLE008\n");

    try (Scanner input = new Scanner(System.in)) {
      // * Memasukkan jumlah nilai yang dibutuhkan
      System.out.print("Masukkan jumlah nilai: ");
      int n = input.nextInt();

      // * Membuat array berdasarkan jumlah nilai yang dimasukkan
      int[] array = new int[n];

      // * Isi nilai-nilai ke dalam array
      for (int i = 0; i < n; i++) {
        System.out.print("Masukkan nilai ke-" + (i + 1) + ": ");
        array[i] = input.nextInt();
      }

      // * Mencari nilai terendah dan nilai tertinggi
      int max = array[0];
      int min = array[0];
      for (int i = 1; i < n; i++) {
        if (array[i] > max) {
          max = array[i];
        }
        if (array[i] < min) {
          min = array[i];
        }
      }

      // * Mengurutkan nilai-nilai dalam array dari terendah ke tertinggi
      Arrays.sort(array);

      // * Menampilkan hasil
      System.out.println("Nilai tertinggi: " + max);
      System.out.println("Nilai terendah: " + min);
      System.out.print("Nilai dalam urutan terendah ke tertinggi: ");

      for (int i = 0; i < n; i++) {
        System.out.print(array[i] + " ");
      }

      // * New line
      System.out.println();
    }
  }
}
