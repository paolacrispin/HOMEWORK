#include <iostream>
#include <vector>
using namespace std;
int input_number(int number, vector<int>&binario);
int main (){
    int number=0;
    vector<int>binario;
    int result= input_number(number,binario);
    cout<<result;
    return 0;
}
int input_number(int number, vector<int>&binario){
    int bit_one=0;
    do{
    cout<<"Introduzca un número"<<endl;
    cin>>number;
    }while(number<=0);
    while(number>=1){
    int residuo=number%2;
    binario.push_back(residuo);
	number/=2;
    }
    for (int contador:binario){
        if(contador==1){
            ++bit_one;
        }
    }
    return bit_one;
}