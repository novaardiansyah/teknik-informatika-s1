import java.util.*;

public class HitungKata {
  public static void main(String[] args) {
    System.out.println("\nNama : Nova Ardiansyah");
    System.out.println("NIM  : 211011401309");
    System.out.println("Kelas: 04TPLE008\n");
    
    String deskripsi = "aku seorang bajak laut di tengah laut marineford, sedang merompak kapal para penjajah Refolusi. Namun aku takut dengan seorang penjajah dari pasukan Refolusi keturunan Indonesia";

    // * Menghapus tanda baca dan mengubah semua karakter menjadi huruf kecil
    String cleanedText = deskripsi.replaceAll("[^a-zA-Z ]", "").toLowerCase();

    // * Membagi string menjadi array kata
    String[] words = cleanedText.split("\\s+");

    // * Menghitung jumlah kemunculan kata
    Map<String, Integer> wordCountMap = new HashMap<>();
    for (String word : words) {
      if (wordCountMap.containsKey(word)) {
        wordCountMap.put(word, wordCountMap.get(word) + 1);
      } else {
        wordCountMap.put(word, 1);
      }
    }

    List<Map.Entry<String, Integer>> sortedWordCountList = new ArrayList<>(wordCountMap.entrySet());
    sortedWordCountList.sort(Map.Entry.comparingByValue(Comparator.reverseOrder()));

    // * Menampilkan hasil
    for (Map.Entry<String, Integer> entry : sortedWordCountList) {
      System.out.println("- " + entry.getKey() + " = " + entry.getValue());
    }
  }
}
