public class HitungKarakter {
  public static void main(String[] args) {
    System.out.println("\nNama : Nova Ardiansyah");
    System.out.println("NIM  : 211011401309");
    System.out.println("Kelas: 04TPLE008\n");

    String input = "pemrogramanDasarJava1";
    int uppercaseCount = 0;
    int lowercaseCount = 0;
    int digitCount     = 0;
    int symbolCount    = 0;

    for (int i = 0; i < input.length(); i++) {
      char ch = input.charAt(i);
      if (Character.isUpperCase(ch)) {
        uppercaseCount++;
      } else if (Character.isLowerCase(ch)) {
        lowercaseCount++;
      } else if (Character.isDigit(ch)) {
        digitCount++;
      } else {
        symbolCount++;
      }
    }

    System.out.println("INPUT : " + input + "\n");
    System.out.println("uppercase : " + uppercaseCount);
    System.out.println("lowecase : " + lowercaseCount);
    System.out.println("angka : " + digitCount);
    System.out.println("symbol : " + symbolCount);
  }
}
