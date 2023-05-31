#include <iostream>
#include <vector>
using namespace std;

void mostrar_matrix(const vector<int>& matriz_vacia);
void user_input(vector<int>matriz_vacia);
void invertido(vector<int>matriz_vacia);
void orden_ascendente(vector<int>&matriz_vacia);
int main() {
    vector<int> matriz_vacia;
    user_input(matriz_vacia);
    mostrar_matrix(matriz_vacia);
    invertido(matriz_vacia);
   orden_ascendente(matriz_vacia);
    return 0;
}

void user_input(vector<int>& matriz_vacia) {
    for (int i = 0; i < 40; ++i) {
        cout << "Ingrese el valor " << i + 1 << endl;
        int valor;
        cin >> valor;
        matriz_vacia.push_back(valor);
    }
}

void mostrar_matrix(vector<int> matriz_vacia) {
    for (int fila : matriz_vacia) {
        cout << fila << " ";
    }
}
void invertido(vector<int>matriz_vacia){
    for (int i=40;i>0;--i){
      cout << matriz_vacia[i] << " ";  
    }
}
void orden_ascendente(vector<int>&matriz_vacia){
    for(int i=0; i<matriz_vacia.size()-1;++i){
        for (int p = 0; p < matriz_vacia.size() - 1-i; ++p) {
            if (matriz_vacia[p] > matriz_vacia[p + 1]) {//si el primer termino es mayor al 2do
                int save = matriz_vacia[p];
                matriz_vacia[p] = matriz_vacia[p + 1];//el segundo se vuelve el primer termino
                matriz_vacia[p + 1] = save;//y el primero va por detrás del segundo que segun la comparación es el más pequeño
            }
        }
    }        
}