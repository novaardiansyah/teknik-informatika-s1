public class Komputer {
  private String merek;
  private String processor;
  private int tahun;

  // * Constructor dengan parameter
  public Komputer(String merek, String processor, int tahun) {
    this.merek     = merek;
    this.processor = processor;
    this.tahun     = tahun;
  }

  // * Method untuk menampilkan informasi komputer
  public void tampilkanInfo() {
    System.out.println("Komputer " + merek + " dengan processor " + processor + " tahun " + tahun);
  }

  public static void main(String[] args) {
    System.out.println("\nNama : Nova Ardiansyah");
    System.out.println("NIM  : 211011401309");
    System.out.println("Kelas: 04TPLE008\n");
    
    // * Buat objek komputer
    Komputer komputer1 = new Komputer("Asus", "Intel Core i7", 2010);
    Komputer komputer2 = new Komputer("Acer", "Intel Core i5", 2015);

    // * Tampilkan informasi komputer
    komputer1.tampilkanInfo();
    komputer2.tampilkanInfo();
  }
}