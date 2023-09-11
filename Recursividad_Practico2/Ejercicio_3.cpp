#include <iostream>

int factor = 2; 

void factorize(int n) {
    if (n == 1 || n ==0) {
        return;
    }

    if (n % factor == 0) {
        printf(" %d ",factor);
        factorize(n / factor);
    }
    else {
        ++factor;
        factorize(n);
    }
}

int main() {
    int n=0;
    printf("Ingrese un número ");
    scanf("%d", &n);
    factorize(n);
    return 0;
}
