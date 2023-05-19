#include <iostream>//EJERCICI0 1----------------------------------------------------------------------------------------------------
using namespace std;
// Function prototypes Here

/**
 * @brief Muestra al robot
 * @Input  - void
 * @Output - void
 */
void robot ();
int main () {
      // call functions here
robot();
return 0;
}
// Function definitions
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
#include <iostream>//EJERCICI0 2----------------------------------------------------------------------------------------------------
using namespace std;
// Function prototypes Here

/**
 * @brief Solicita una entrada al usuario la cual es procesada y luego se retorna.
 * @Input  - void
 * @Output - int
 */
int numbers();
/**
 * @brief Calcula el número anterior, posterior y el doble; muestra mensajes del resultado 
 * @Input  -int
 * @Output - void
 */
void message(int value);
int main() {
   // call functions here
int value= numbers();
message(value);
return 0;
}
// Function definitions
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
#include <iostream>//EJERCICI0 3---------------------------------------------------------------------------------------------------
using namespace std;
// Function prototypes Here

/**
 * @brief Solicita una entrada al usuario la cual es procesada y luego se retorna.
 * @Input  - void
 * @Output - int
 */
int get_user_input1();
/**
 * @brief Calcula y muestra la madera contrachapado restante
 * @Input  - int
 * @Output -void
 */
void calculus1(int &wood_balance);
/**
 * @brief Calcula y muestra la madera contrachapado restante con el dato del primer cálculo
 * @Input  - int
 * @Output -void
 */
void calculus2(int &wood_balance);
/**
 * @brief Calcula y muestra la madera contrachapado restante con el daato del segundo cálculo
 * @Input  - int
 * @Output -void
 */
void calculus3(int &wood_balance);
int main() {
int wood_balance= get_user_input1();
calculus1(wood_balance);
calculus2(wood_balance);
calculus3(wood_balance);
return 0;
}
  // call functions here
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

#include <iostream>//EJERCICI0 4---------------------------------------------------------------------------------------------------
using namespace std;
// Function prototypes Here

/**
 * @brief Muestra las variables predeterminadas a través de tres mensajes
 * @Input  - string
 * @Output - void
 */
void variables(string x, string y);
/**
 * @brief Muestra las variables invertidas a través de 2 mensajes
 * @Input  -string
 * @Output -void
 */
void switch_1(string& x, string& y);
int main() {
// call functions here
string x = "sartén";
string y = "sombrero";
variables(x, y);
switch_1(x, y);
return 0;
}
// Function definitions
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
