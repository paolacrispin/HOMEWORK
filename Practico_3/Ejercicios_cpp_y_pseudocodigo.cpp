# include <iostream>//EJERCICI0 1----------------------------------------------------------------------------------------------------
# include <string>
using namespace std;
// Function prototypes Here

/**
 * @brief Solicita una entrada al usuario la cual es procesada y luego se retorna.
 * @Input  - void
 * @Output -string
 */
string get_user_input();
/**
 * @brief Verifica si es palindromo y luego retorna un mensaje si es o no
 * @Input  - string
 * @Output - string
 */
string calculus(string number);
/**
 * @brief Ejecuta el loop
 * @Input  - int 
 * @Output - void
 */
void message (int money, int helado);
int main () { 
	// call functions here
	string number=get_user_input();
	string result=calculus(number);
	cout<< result;
	cout<<"EJERCICIO_2"<<endl;
	int money=20;
int helado=5;
message (money, helado);
	return 0;
}
// Function definitions
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
// Function definitions
void message (int money, int helado){
for (int i=0; money>0; i+=1){
	money-=helado;
	cout << "Se compro un helado"<<endl;
	cout << "Te queda "<<money<<" para comprar helados"<<endl;
 	}
}


