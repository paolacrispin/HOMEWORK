#include <iostream>
#include <vector>
using namespace std;

void input_vector4x4(vector<vector<int>>& vector4x4);
void input_vectortam4(vector<int>& vector_tam4);
void calculate_resultante(vector<int>& matriz_resultante, const vector<int>& vector_tam4, const vector<vector<int>>& vector4x4);
void show(const vector<int>& matriz_resultante);

int main(){
    vector<vector<int>> vector4x4;
    vector<int> vector_tam4;
    vector<int> matriz_resultante;
    
    input_vector4x4(vector4x4);
    input_vectortam4(vector_tam4);
    calculate_resultante(matriz_resultante, vector_tam4, vector4x4);
    show(matriz_resultante);
    
    return 0;
}

void input_vector4x4(vector<vector<int>>& vector4x4) {
    vector4x4.resize(4, vector<int>(4));
    
    for(int j = 0; j < 4; ++j) {
        for (int i = 0; i < 4; ++i) {
            cout << "Ingrese el valor de la fila " << j + 1 << " columna " << i + 1 << ": ";
            cin >> vector4x4[j][i];
        }
    }
}

void input_vectortam4(vector<int>& vector_tam4){
    vector_tam4.resize(4);
    
    for (int i = 0; i < 4; ++i) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> vector_tam4[i];
    }
}

void calculate_resultante(vector<int>& matriz_resultante, const vector<int>& vector_tam4, const vector<vector<int>>& vector4x4){
    for (int i = 0; i < 4; ++i){
        int suma = 0;
        
        for (int j = 0; j < 4; ++j){
            suma += vector4x4[i][j] * vector_tam4[j];
        }
        
        matriz_resultante.push_back(suma);
    }
}

void show(const vector<int>& matriz_resultante){
    for (int valor : matriz_resultante) {
        cout << valor << " ";
    }
}
