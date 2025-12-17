#include <stdio.h>

int main() {
    printf("Tailles des types de base en octets:\n");
    printf("char: %zu\n", sizeof(char));
    printf("short: %zu\n", sizeof(short));
    printf("int: %zu\n", sizeof(int));
    printf("long int: %zu\n", sizeof(long int));
    printf("long long int: %zu\n", sizeof(long long int));
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("long double: %zu\n", sizeof(long double));
    return 0;
}
