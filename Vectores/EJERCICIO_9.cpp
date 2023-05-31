#include <iostream>
#include <vector>
using namespace std;
void input_svector(vector<int>& vector_salary);
void promedio(vector<int>&vector_salary);
int main(){
    vector<int>vector_salary;
    input_svector(vector_salary);
    promedio(vector_salary);
    return 0;
}

void input_svector(vector<int>&vector_salary){
    int number=0;
    cout<<"ingrese el número de salarios a calcular"<<endl;
    cin>>number;
    cout<< "salary =  ";
    vector_salary.resize(number);
    for (int i = 0; i < number; ++i) {
        cin >> vector_salary[i];
    }
}
void promedio(vector<int>&vector_salary){
    for(int i=0; i<vector_salary.size()-1;++i){//estoy ordenando el vector de manera ascendente 
        for (int p = 0; p < vector_salary.size() - 1-i; ++p) {
            if (vector_salary[p] > vector_salary[p + 1]) {
                int save = vector_salary[p];
                vector_salary[p] = vector_salary[p + 1];
                vector_salary[p + 1] = save;
            }
        }
    }
     int sum = 0;
    for (int i = 1; i < vector_salary.size() - 1; ++i) {
        sum += vector_salary[i];
    }
    double promedio=sum/(vector_salary.size()-2);
    cout<<"promedio = "<< promedio<<endl;
}
 
