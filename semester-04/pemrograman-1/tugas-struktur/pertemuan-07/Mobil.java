public class Mobil {
  private String merk;
  private int tahun;

  // * Constructor dengan parameter
  public Mobil(String merk, int tahun) {
    this.merk = merk;
    this.tahun = tahun;
  }

  // * Method untuk menampilkan informasi mobil
  public void tampilkanInfo() {
    System.out.println("Mobil " + merk + " tahun " + tahun);
  }

  public static void main(String[] args) {
    System.out.println("\nNama : Nova Ardiansyah");
    System.out.println("NIM  : 211011401309");
    System.out.println("Kelas: 04TPLE008\n");
    
    // * Buat objek mobil
    Mobil mobil1 = new Mobil("Toyota", 2010);
    Mobil mobil2 = new Mobil("Honda", 2015);

    // * Tampilkan informasi mobil
    mobil1.tampilkanInfo();
    mobil2.tampilkanInfo();
  }
}