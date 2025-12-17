#include <stdio.h>

int main(void) {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);
    
    for (int n = 0; n < taille; n++) {
        int nombre = nombres[n];
        printf("Nombre : %d en binaire : ", nombre);
        
        int bits = sizeof(int) * 8;
        int affichage_commence = 0;
        
        for (int i = bits - 1; i >= 0; i--) {
            int bit = (nombre >> i) & 1;
            
            if (bit == 1) {
                affichage_commence = 1;
            }
            
            if (affichage_commence) {
                printf("%d", bit);
            }
        }
        
        if (!affichage_commence) {
            printf("0");
        }
        
        printf("\n");
    }
    
    return 0;
}
