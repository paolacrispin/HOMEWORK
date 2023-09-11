#include <iostream>
void papersizes(int i, int n, int l, int b) {
    if (i==0) {
        printf("A%d: %dmm x %dmm\n", i, l, b);
        return;
    }
    else{
    printf("A%d: %dmm x %dmm\n", i, l, b);
    papersizes(i - 1, n, b*2, l);
    }
}

int main() {
    int i;
    int n;
    int l;
    int b;
    printf("Ingrese el número del tamaño del papel: ");
    scanf("%d", &i);
    printf("Ingrese el número de tamaños de papel a imprimir: ");
    scanf("%d", &n);
    printf("Ingrese el largo de dicho papel: ");
    scanf("%d", &l);
    printf("Ingrese el ancho de dicho papel: ");
    scanf("%d", &b);
    papersizes(i, n, l, b);

    return 0;
}
