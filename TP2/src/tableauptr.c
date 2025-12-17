#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int tab_int[11];
    float tab_float[11];
    
    srand(time(NULL));
    
    int *ptr_int = tab_int;
    float *ptr_float = tab_float;
    
    for (int i = 0; i < 11; i++) {
        *(ptr_int + i) = rand() % 150 + 1;
        *(ptr_float + i) = (float)(rand() % 1000) / 100.0f;
    }
    
    printf("=== Tableau d'entiers (avant) ===\n");
    ptr_int = tab_int;
    for (int i = 0; i < 11; i++) {
        printf("%d ", *(ptr_int + i));
    }
    printf("\n\n");
    
    printf("=== Tableau de float (avant) ===\n");
    ptr_float = tab_float;
    for (int i = 0; i < 11; i++) {
        printf("%.2f ", *(ptr_float + i));
    }
    printf("\n\n");
    
    ptr_int = tab_int;
    for (int i = 0; i < 11; i++) {
        if (i % 2 == 0) {
            *(ptr_int + i) *= 3;
        }
    }
    
    ptr_float = tab_float;
    for (int i = 0; i < 11; i++) {
        if (i % 2 == 0) {
            *(ptr_float + i) *= 3;
        }
    }
    
    printf("=== Tableau d'entiers (après) ===\n");
    ptr_int = tab_int;
    for (int i = 0; i < 11; i++) {
        printf("%d ", *(ptr_int + i));
    }
    printf("\n\n");
    
    printf("=== Tableau de float (après) ===\n");
    ptr_float = tab_float;
    for (int i = 0; i < 11; i++) {
        printf("%.2f ", *(ptr_float + i));
    }
    printf("\n");
    
    return 0;
}
