#include <stdio.h>

int main(void) {
    char noms[5][50] = {
        "Dupont Marie",
        "Martin Pierre",
        "Durand Sophie",
        "Bernard Luc",
        "Petit Julie"
    };
    
    char adresses[5][100] = {
        "20, Boulevard Niels Bohr, Lyon",
        "22, Boulevard Niels Bohr, Lyon",
        "15, Rue des Sciences, Paris",
        "8, Avenue de la République, Marseille",
        "30, Rue Victor Hugo, Toulouse"
    };
    
    float notes_prog[5] = {16.5, 14.0, 15.5, 13.0, 17.0};
    float notes_sys[5] = {12.1, 14.1, 13.5, 15.0, 16.5};
    
    printf("=== Informations des étudiant.e.s ===\n\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom et prénom : %s\n", noms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note en Programmation C : %.1f\n", notes_prog[i]);
        printf("Note en Système d'exploitation : %.1f\n", notes_sys[i]);
        printf("\n");
    }
    
    return 0;
}
