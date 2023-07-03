package uas_pemrograman1;

public class NamaBulan {

	public static void main(String[] args) {
        System.out.println("\n** UAS PEMROGRAMAN 1 JAVA PROGRAMMING **\n");
        
        String[] arrNamaBulan = namaBulan();
        
        for (int i = 0; i < arrNamaBulan.length; i++) {
            System.out.println("Bulan " + arrNamaBulan[i]);
        }
	}
  
	static String[] namaBulan() {
        String[] arrNamaBulan = {
            "Januari", "Februari", "Maret", "April", "Mei", "Juni", 
            "Juli", "Agustus", "September", "Oktober", "November", "Desember"
        };

        return arrNamaBulan;
    }
}