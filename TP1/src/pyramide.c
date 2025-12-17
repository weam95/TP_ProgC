#include <stdio.h>

int main(void) {
    int n = 5;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        
        printf("\n");
    }
    
    printf("\nGénération de la pyramide terminée.\n");
    
    return 0;
}
