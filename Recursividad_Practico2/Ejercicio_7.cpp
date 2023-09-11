#include <iostream>
int fibonacci(int n){
    if (n==1){
        return 1;
    }
    if (n==0){
        return 0;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main (){
    int n=0;
    printf("Ingrese el enésimo número de Fibonacci a encontrar ");
    scanf("%d", &n);
    int result= fibonacci(n);
    printf("Result= %d", result);
    return 0;
}