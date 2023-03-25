public class Car {
  private String merk;
  private int tahun;

  // * Constructor dengan parameter
  public Car(String merk, int tahun) {
    this.merk = merk;
    this.tahun = tahun;
  }

  // * Method untuk menampilkan informasi car
  public void tampilkanInfo() {
    System.out.println("Car " + merk + " tahun " + tahun);
  }

  public static void main(String[] args) {
    System.out.println("\nNama : Nova Ardiansyah");
    System.out.println("NIM  : 211011401309");
    System.out.println("Kelas: 04TPLE008\n");
    
    // * Buat objek car
    Car car1 = new Car("Toyota", 2010);
    Car car2 = new Car("Honda", 2015);

    // * Tampilkan informasi car
    car1.tampilkanInfo();
    car2.tampilkanInfo();
  }
}