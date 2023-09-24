#include <iostream>
#include <vector>

int N=0;
vector<vector<int>> tablero(N, vector<int>(N, 0)); 

void  KnightsMove(int a, int b, int r){
    
    if (a>N || b>N || a<0 || b<0){
        return 0;
    }
    if (tablero[a][b]==0){
        tablero[a][b]==r;
    }
     

KnightsMove(a - 2, b + 1, r+1);
KnightsMove(a - 1, b + 2, r+1);
KnightsMove(a + 1, b + 2, r+1);
KnightsMove(a + 2, b + 1, r+1);
KnightsMove(a + 2, b - 1, r+1);
KnightsMove(a + 1, b - 2, r+1);
KnightsMove(a - 1, b - 2, r+1);
KnightsMove(a - 2, b - 1, r+1);
}

int main() {
    int a=0;
    int b=0;
    int r=1;
    printf("Ingrese el tamaño del tablero: ");
    scanf("%d", &N);
    printf("Ingrese las coordenadas: ");
    scanf("%d %d", &a, &b);
    vector<vector<int>> tablero(N, vector<int>(N, 0));
    KnightsMove()
}

// se intentó :(