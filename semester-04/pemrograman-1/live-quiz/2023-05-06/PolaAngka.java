public class PolaAngka {
  public static void main(String[] args) {
    System.out.println("\nNama : Nova Ardiansyah");
    System.out.println("NIM  : 211011401309");
    System.out.println("Kelas: 04TPLE008\n");
    
    int N = 5;
    int[][] pattern = new int[N][N];
    int count = 1;

    for (int i = 0; i < N; i++) {
      if (i % 2 == 0) {
        for (int j = 0; j < N; j++) {
          pattern[i][j] = count++;
        }
      } else {
        for (int j = N - 1; j >= 0; j--) {
          pattern[i][j] = count++;
        }
      }
    }

    // * Menampilkan pola
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        System.out.print(String.format("%02d ", pattern[i][j]));
      }
      System.out.println();
    }
  }
}