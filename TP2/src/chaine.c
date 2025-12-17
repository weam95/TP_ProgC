#include <stdio.h>

int main(void) {
    char chaine1[] = "Hello";
    char chaine2[] = " World!";
    char destination[100];
    char concatenation[100];
    
    int longueur = 0;
    while (chaine1[longueur] != '\0') {
        longueur++;
    }
    printf("Nombre de caractères dans '%s' : %d\n", chaine1, longueur);
    
    int i = 0;
    while (chaine1[i] != '\0') {
        destination[i] = chaine1[i];
        i++;
    }
    destination[i] = '\0';
    printf("Chaîne copiée : '%s'\n", destination);
    
    i = 0;
    while (chaine1[i] != '\0') {
        concatenation[i] = chaine1[i];
        i++;
    }
    
    int j = 0;
    while (chaine2[j] != '\0') {
        concatenation[i] = chaine2[j];
        i++;
        j++;
    }
    concatenation[i] = '\0';
    
    printf("Chaînes concaténées : '%s'\n", concatenation);
    
    return 0;
}
