#include <stdio.h>

int main() {
    //variables
    float total_belanja;
    float diskon = 0.0; 
    float harga_setelah_diskon;

    //input
    printf("Masukkan total belanja: Rp. ");
    scanf("%f", &total_belanja); // %f adalah semacam placeholder untuk mencetak nilai dari type data "float"
    
    // proses pertama untuk perhitungan diskon
    if (total_belanja < 200.000) {
        diskon = 0.0; // Jika total belanja kurang dari Rp. 200.000, tidak mendapat diskon
    } else if (total_belanja >= 200000 && total_belanja < 500000) {
        diskon = 0.1; // Jika total belanja antara Rp 200.000 – Rp. 500.000, mendapat diskon 10%.
    } else if (total_belanja >= 500000 && total_belanja < 1000000) {
        diskon = 0.2; // Jika total belanja antara Rp. 550.000 – Rp. 1.000.000, mendapat diskon 20%.
    } else if (total_belanja >= 1000000) {
        diskon = 0.3; // Jika total belanja diatas Rp.1.000.000, mendapat diskon 30%.
    }

    // proses kedua untuk transaksi pembelian sebanyak 4 kali dalam sebulan
    int transaksi_sebulan = 4;
    if (transaksi_sebulan == 4) {
        diskon = 0.2; // Diskon 20%  
    }

    // proses perhitungan
    harga_setelah_diskon = total_belanja - (total_belanja * diskon);

    printf("Harga setelah diskon adalah Rp. %.2f\n", harga_setelah_diskon);

    return 0;
}