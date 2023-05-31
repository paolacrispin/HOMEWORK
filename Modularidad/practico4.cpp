// CPP cuerpo de funciones
#include "practico4.h"
#include <iostream>
string get_user_input(){
    int numero;
    cin>> numero;
	string proof=to_string(numero);
	return proof;
  }
  string calculus(string number){
	int i=0;
  while (i<number.size()){
	if (number[i]==number[(number.size()-1)-i]){
	 return"Es palindromo";
    }
    else {
    return "no es palindromo";
    break;
    }
    ++i;
	}
  }
void message (int money, int helado){
for (int i=0; money>0; i+=1){
	money-=helado;
	cout << "Se compro un helado"<<endl;
	cout << "Te queda "<<money<<" para comprar helados"<<endl;
 	}
}