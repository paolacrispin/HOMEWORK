#include <iostream>
#include <vector>
using namespace std;
void user_input(vector<int>&temperatura);
void calculo(vector<int>temperatura);
int main(){
    int N;
    cout<<"ingrese el número de días analizados"<<endl;
    cin>>N;
    vector<int>temperatura(N);
    user_input(temperatura);
     calculo(temperatura);
}
void user_input(vector<int>&temperatura ) {
    for (int i = 0; i < temperatura.size(); ++i) {
        cout << "Ingrese la temperatura " << i + 1 << endl;
        int valor;
        cin >> valor;
        temperatura[i] = valor;
    }
}
void calculo(vector<int>temperatura){
int contar=0;
int sum = 0;
vector <int>posicion;
    for (int i = 0; i < temperatura.size(); ++i) {
        sum += temperatura[i];
    }
    int promedio=sum/(temperatura.size()-1);
    for(int i=0; i<temperatura.size();++i){
        if (promedio<=temperatura[i]){
            cout<<i<<" ";
            ++contar;
        }
    }
    cout<<endl;
    cout<<contar<<endl;
}

