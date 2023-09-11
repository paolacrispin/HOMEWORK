#include <iostream>

int sumarecursiva(int arr[], int size) {
    // Caso base: Cuando tengamos un array vacío
    if (size == 0) {
        return 0;
    } else {
        return arr[size - 1] + sumarecursiva(arr, size - 1);
    }
}

int main() {
    int arr[100]; 
    int size=0; 

    printf("Ingrese el tamaño del array: ");
     scanf("%d", &size);

    printf("Ingrese los elementos del array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    int suma = sumarecursiva(arr, size);

    printf("La suma de los elementos del array es: %d\n", suma);

    return 0;
}

