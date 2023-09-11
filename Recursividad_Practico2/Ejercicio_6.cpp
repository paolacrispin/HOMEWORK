#include <iostream>
#include <vector>

int pA[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int pB[] = {1, 2, 2, 1, -1, -2, -2, -1};
bool validation(vector<vector<int>>& tablero, int a, int b, int N) {
return (a>=1 && a<=n && b>=1 && b<=N && tablero[a][b]==0);//verifica si ya se pasó ppor esa casilla
}

int main() {
    int N=0;
    int a=0;
    int b=0;
    printf("Ingrese el tamaño del tablero: ");
    scanf("%d", &N);
    printf("Ingrese las coordenadas: ");
    scanf("%d %d", &a, &b);
    vector<vector<int>> tablero(N, vector<int>(N, 0));

}
// se intentó :(