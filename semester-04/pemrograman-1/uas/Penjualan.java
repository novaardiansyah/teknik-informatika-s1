package uas_pemrograman1;
import java.util.Scanner;

public class Penjualan {
	public static void main(String[] args) {
        System.out.println("\n** UAS PEMROGRAMAN 1 JAVA PROGRAMMING **\n");

        Scanner scanner = new Scanner(System.in);
            
        double arrHarga[] = new double[3];

        for (int i = 0; i < 3; i++) {
            System.out.print("Masukkan harga " + (i + 1) + ": ");
            arrHarga[i] = scanner.nextDouble();
        }

        scanner.close();

        double arrDiskon[] = new double[3];

        for (int i = 0; i < 3; i++) {
            double harga = arrHarga[i];
            double diskon = harga >= 100000 ? 0.2 : harga >= 50000 ? 0.1 : 0;
            arrDiskon[i] = diskon;
        }

        System.out.println("\nHarga \t\t Discount \t Total");
        
        for (int i = 0; i < 3; i++) {
            double harga = arrHarga[i];
            double diskon = arrDiskon[i];
            double total = harga - (harga * diskon);
            if (i == 0) 
                System.out.println(harga + "\t " + diskon + "\t\t " + total);
            else
                System.out.println(harga + "\t\t " + diskon + "\t\t " + total);
        }
    }
}