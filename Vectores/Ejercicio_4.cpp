#include <iostream>
#include <vector>
using namespace std;
void buscar(vector<int>matriz, int number);
int main() {
    int number=0;
    vector <int> matriz= {1,3,4,5,6,7,2,9,10};
    buscar(matriz, number);
    return 0;
}
void buscar(vector<int>matriz, int number) {
    int posicion=0;
    do{
        cout<<"Ingrese el número que busca"<<endl;
        cin>>number;
        for (int i = 0; i < matriz.size(); ++i) {
            if (matriz[i] == number) {
                 posicion=i+1;
                break;
            }
        }
        if(posicion!=0){
            cout << "El número " << number << " se encuentra en la posición " << posicion << endl;
        }
        else{
            cout << "El número " << number << " no está en la matriz" << endl;
        }
    } while (number!=-1);
}

