#include <stdio.h>

int main(void) {
    int num1 = 20;
    int num2 = 4;
    char op = '+';
    
    printf("num1 = %d, num2 = %d, opérateur = '%c'\n\n", num1, num2, op);
    
    switch (op) {
        case '+':
            printf("Résultat : %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Résultat : %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Résultat : %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Résultat : %d / %d = %d\n", num1, num2, num1 / num2);
            } else {
                printf("Erreur : division par zéro\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Résultat : %d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Erreur : modulo par zéro\n");
            }
            break;
        case '&':
            printf("Résultat : %d & %d = %d\n", num1, num2, num1 & num2);
            break;
        case '|':
            printf("Résultat : %d | %d = %d\n", num1, num2, num1 | num2);
            break;
        case '~':
            printf("Résultat : ~%d = %d\n", num1, ~num1);
            printf("Résultat : ~%d = %d\n", num2, ~num2);
            break;
        default:
            printf("Opérateur non reconnu\n");
            break;
    }
    
    return 0;
}
