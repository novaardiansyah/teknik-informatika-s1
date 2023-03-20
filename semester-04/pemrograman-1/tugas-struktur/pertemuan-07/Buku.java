public class Buku {
  private String judul;
  private String pengarang;
  private int tahun;

  // * Constructor dengan parameter
  public Buku(String judul, String pengarang, int tahun) {
    this.judul = judul;
    this.pengarang = pengarang;
    this.tahun = tahun;
  }

  // * Method untuk menampilkan informasi buku
  public void tampilkanInfo() {
    System.out.println("Buku " + judul + " oleh " + pengarang + " tahun " + tahun);
  }

  public static void main(String[] args) {
    System.out.println("\nNama : Nova Ardiansyah");
    System.out.println("NIM  : 211011401309");
    System.out.println("Kelas: 04TPLE008\n");
    
    // * Buat objek buku
    Buku buku1 = new Buku("Harry Potter", "J.K. Rowling", 2010);
    Buku buku2 = new Buku("The Hobbit", "J.R.R. Tolkien", 2015);

    // * Tampilkan informasi buku
    buku1.tampilkanInfo();
    buku2.tampilkanInfo();
  }
}