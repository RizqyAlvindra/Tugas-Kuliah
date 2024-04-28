#include <stdio.h>

union Angka {
    int integer;
    float desimal;
};

int main() {
    union Angka nilai1, nilai2;
    char operasi;
    
    printf("masukkan bilangan bulat pertama : ");
    scanf("%d", &nilai1.integer);
    printf("masukkan bilangan bulat/decimal untuk kedua: ");
    scanf("%f", &nilai2.desimal);
    printf("input (+) untuk pertambahan atau (-) untuk pengurangan:");
    scanf(" %c", &operasi);

    switch (operasi) {
        case '+':
            if (nilai2.desimal != (int)nilai2.desimal) {
                printf("hasil pertambahan: %.2f\n", nilai1.integer + nilai2.desimal);
            } else {
                printf("hasil pertambahan: %d\n", nilai1.integer + (int)nilai2.desimal);
            }
            break;
        case '-':
            if (nilai2.desimal != (int)nilai2.desimal) {
                printf("hasil pengurangan: %.2f\n", nilai1.integer - nilai2.desimal);
            } else {
                printf("hasil pengurangan: %d\n", nilai1.integer - (int)nilai2.desimal);
            }
            break;
        default:
            printf("error\n");
            break;
    }
    return 0;
}
    