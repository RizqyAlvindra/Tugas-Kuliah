#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_BULAN 12
#define MAX_NAMA_BULAN 10

struct Bulan {
    char nama[MAX_NAMA_BULAN];
};

// variabel untuk menyimpan nama bulan
static struct Bulan bulan[MAX_BULAN] = {
    {"Januari"}, {"Februari"}, {"Maret"}, {"April"}, {"Mei"}, {"Juni"},
    {"Juli"}, {"Agustus"}, {"September"}, {"Oktober"}, {"November"}, {"Desember"}
};

// function untuk menghitung jumlah huruf vocal 
int countVowels(char *str) {
    int count = 0;
    while (*str) {
        if (strchr("aiueoAIUEO", *str)) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char input; //input
    printf("Masukkan huruf yang Anda inginkan (range a-z): ");
    scanf(" %c", &input);

    printf("Bulan yang berawalan dengan huruf '%c' adalah sebagai berikut:\n", input);
    int ditemukan = 0;
    int pilihan_bulan[MAX_BULAN]; 
    for (int i = 0; i < MAX_BULAN; ++i) {
        if (tolower(bulan[i].nama[0]) == tolower(input)) {
            printf("%d. %s\n", ditemukan + 1, bulan[i].nama);
            pilihan_bulan[ditemukan] = i; // menyimpan indeks bulan yang ditemukan
            ditemukan++;
        }
    }

    if (ditemukan == 0) {
        printf("TIDAK ada bulan yang berawalan dengan huruf '%c'!!!\n", input);
        return 0;
    }

    // case choice
    int pilihan;
    printf("Pilih bulan yang Anda inginkan (1-%d): ", ditemukan);
    scanf("%d", &pilihan);
    if (pilihan < 1 || pilihan > ditemukan) {
        printf("Pilihan tidak valid.\n");
        return 0;
    }

    // menghitung jumlah huruf vocal dan nonvocal pada bulan yang dipilih
    int vokal = countVowels(bulan[pilihan_bulan[pilihan - 1]].nama);
    int nonvokal = strlen(bulan[pilihan_bulan[pilihan - 1]].nama) - vokal;

    //output
    printf("Jumlah huruf vocal yang ada pada bulan %s adalah %d\n", bulan[pilihan_bulan[pilihan - 1]].nama, vokal);
    printf("Jumlah huruf nonvocal yang ada pada bulan %s adalah %d\n", bulan[pilihan_bulan[pilihan - 1]].nama, nonvokal);

    return 0;
}