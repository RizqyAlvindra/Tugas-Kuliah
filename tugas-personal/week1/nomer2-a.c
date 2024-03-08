#include <stdio.h>

int main() {
    // variables
    float km;
    float m, cm;

    //input
    printf("Input jarak x dalam km: ");
    scanf("%f", &km); //%f adalah semacam placeholder untuk mencetak nilai dari type data "float"

    // proses perhitungan dari kilometer ke meter dan centimeter
    m = km * 1000;
    cm = m * 100;

    // Hasil (output)
    printf("Jarak x dalam meter: %.2f m\n", m);
    printf("Jarak x dalam centimeter: %.2f cm\n", cm);

    return 0;
}