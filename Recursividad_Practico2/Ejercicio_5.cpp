#include <iostream>

int expRecursiva(int base, int exp) {
    // Caso base: Cuando el exp sea 0
    if (exp == 0) {
        return 1;
    } else {
        return base * expRecursiva(base, exp -1);
    }
}

int main() {
    int base=0; 
    int exp=0;
    printf("Ingrese la base ");
     scanf("%d", &base);

    printf("Ingrese el exponente:");
    scanf("%d", &exp);

    int result = expRecursiva(base, exp);

    printf("Result= %d\n", result);

    return 0;
}

