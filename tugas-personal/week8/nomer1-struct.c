#include <stdio.h>

struct Information {
    char panggilan[10];
    char asal[10];
    char hoby[10];
    int umur;
};

int main() {

    struct Information myInformation;

    printf("Siapa nama panggilan anda ? ");
    scanf("%s", myInformation.panggilan);

    printf("Anda berasal dari mana ? ");
    scanf("%s", myInformation.asal);

    printf("Berapakah umur anda ? ");
    scanf("%d", &myInformation.umur);
    
     printf("Apa hobi anda ? ");
    scanf("%s", &myInformation.hoby);   
    
    printf("Hallo nama saya adalah %s, saya berumur %d tahun, dan saya berasal dari %s, lalu hoby saya adalah bermain %s, salam kenal yaa:)", myInformation.panggilan, myInformation.umur, myInformation.asal, myInformation.hoby);

    return 0;
}    