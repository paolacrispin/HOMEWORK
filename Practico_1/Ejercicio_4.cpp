#include <iostream>
#include <stdio.h>
int add_diagonal(int arr[3][3], int row, int col){
    int suma=0;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (i == j) {
                suma += arr[i][j];
            }
        }
    }
    return suma;
}
int main(){
    int arr[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; //Datos de prueba
    int result=add_diagonal(arr, 3, 3);
    printf("%i",result);
    return 0;
}