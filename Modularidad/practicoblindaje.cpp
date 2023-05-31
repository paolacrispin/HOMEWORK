// CPP cuerpo de funciones
#include "practicoblindaje.h"
#include <iostream>
void robot (){
cout<< "_____________" <<endl;
cout<< "|  /\"\"\"\"\"\\  |" <<endl;
cout<< "| /       \\ |"<<endl;
cout<< "| | 0   0 | |" <<endl;
cout << "| |   v   | |" <<endl;
cout << "| \\  ___  / |" <<endl;
cout <<"|  \\_____/  |" <<endl;
cout << "_____________" <<endl;
}
int numbers(){
    int x;
cout << "Please enter a number"<<endl;
cin >> x;
return x;
}
void message(int value){
int y=value+1;
int z=value-1;
int a=value*2;
cout <<"El número "<< value<< " está entre "<<z<< " y "<<y<<"."<<endl;
cout << "Doblado "<<value<<" es igual a "<<a<<"." ;
}
int get_user_input1() {
int wood_balance;
cout << "Please enter the wood balance"<<endl;
cin >> wood_balance;
return wood_balance;
}
void calculus1(int &wood_balance){
int w1=1;
int w2=1;
int w3=1;
int d1=1;
int d2=1;
int d3=1;
int h1=1;
int h2=1;
int h3=1;
wood_balance-=w1*d1+2*(w1*h1+d1*h1);
cout<< "Madera contrachapada restante: "<<wood_balance<<endl;}
void calculus2(int &wood_balance){
int w1=1;
int w2=1;
int w3=1;
int d1=1;
int d2=1;
int d3=1;
int h1=1;
int h2=1;
int h3=1;
wood_balance-=w1*d1+2*(w1*h1+d1*h1);
cout<< "Madera contrachapada restante: "<<wood_balance<<endl;}
void calculus3(int &wood_balance){
int w1=1;
int w2=1;
int w3=1;
int d1=1;
int d2=1;
int d3=1;
int h1=1;
int h2=1;
int h3=1;
wood_balance-=w1*d1+2*(w1*h1+d1*h1);
cout<< "Madera contrachapada restante: "<<wood_balance<<endl;}
void variables(string x, string y){
    cout<<"x - "<<x<<endl;
    cout<<"y - "<<y<<endl;
    cout << "Antes del programa"<<endl;
    cout << "La variable x es "<< x<<endl;
    cout << "La variable y es "<< y<<endl;
    }
void switch_1(string& x, string& y){
cout<< "Después del programa"<<endl;
string new_variable=x;
x=y;
y=new_variable;
cout << "La variable x es "<< x<<endl;
cout << "La variable y es "<< y<<endl;
 }   
