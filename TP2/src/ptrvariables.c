#include <stdio.h>

int main(void) {
    int i = 42;
    float f = 3.14159f;
    double d = 2.718281828;
    char c = 'Z';
    long int li = 1234567890L;
    
    int *ptr_i = &i;
    float *ptr_f = &f;
    double *ptr_d = &d;
    char *ptr_c = &c;
    long int *ptr_li = &li;
    
    printf("=== Avant la manipulation ===\n\n");
    
    printf("Adresse de i : %p, Valeur de i : %x\n", (void*)ptr_i, i);
    printf("Adresse de f : %p, Valeur de f : %x\n", (void*)ptr_f, *(unsigned int*)&f);
    printf("Adresse de d : %p, Valeur de d : %llx\n", (void*)ptr_d, *(unsigned long long*)&d);
    printf("Adresse de c : %p, Valeur de c : %x\n", (void*)ptr_c, c);
    printf("Adresse de li : %p, Valeur de li : %lx\n", (void*)ptr_li, li);
    
    *ptr_i = 100;
    *ptr_f = 2.5f;
    *ptr_d = 1.414;
    *ptr_c = 'A';
    *ptr_li = 9876543210L;
    
    printf("\n=== Après la manipulation ===\n\n");
    
    printf("Adresse de i : %p, Valeur de i : %x\n", (void*)ptr_i, i);
    printf("Adresse de f : %p, Valeur de f : %x\n", (void*)ptr_f, *(unsigned int*)&f);
    printf("Adresse de d : %p, Valeur de d : %llx\n", (void*)ptr_d, *(unsigned long long*)&d);
    printf("Adresse de c : %p, Valeur de c : %x\n", (void*)ptr_c, c);
    printf("Adresse de li : %p, Valeur de li : %lx\n", (void*)ptr_li, li);
    
    return 0;
}
