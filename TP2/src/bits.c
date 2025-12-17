#include <stdio.h>

int main(void) {
    int d = 0x08100000;
    
    int bit4 = (d >> 28) & 1;
    int bit20 = (d >> 12) & 1;
    
    printf("Valeur de d : 0x%x\n", d);
    printf("4ème bit de gauche : %d\n", bit4);
    printf("20ème bit de gauche : %d\n", bit20);
    
    if (bit4 == 1 && bit20 == 1) {
        printf("Résultat : 1\n");
    } else {
        printf("Résultat : 0\n");
    }
    
    return 0;
}
