#include <iostream>
#include <vector>

int grid_traveler(int m, int n) {
    if (m == 1 && n == 1) {
        return 1;
    }

    if (m == 0 || n == 0) {
        return 0;
    }

    return grid_traveler(m - 1, n) + grid_traveler(m, n - 1);

}

int main() {
    int m = 0;
    int n = 0;
    printf("Ingrese el número de filas");
    scanf("%d", &m);
    printf("Ingrese el número de columnas");
    scanf("%d", &n);
    int result = grid_traveler(m, n);
    printf("Result= %d", result);
    return 0;
}
