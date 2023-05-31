#include "practico1.h"
using namespace std;
int main () {
    // call functions here
  int number= get_user_input();
  int show_factorial=factorial(number);
  cout<<"el factorial de "<<number<<" es "<<show_factorial<<endl;
  cout<<"EJERCICIO_2"<<endl;
  int base, expo;
  cin >>base >>expo;
  int show_result= result (base,expo);
  cout<<show_result<<endl;
  cout<<"EJERCICIO_3"<<endl;
  string save_number=get_user_input();
  message(save_number);
  cout<<"EJERCICIO_4"<<endl;
  int first_number=get_user_input_number1();
  int second_number=get_user_input_number2();
  counter(first_number,second_number);
   cout<<"EJERCICIO_5"<<endl;
string full_name= get_user_input();
 int name_counter=counter(full_name);
 cout <<name_counter<<endl;
 cout << full_name.size() << endl;
  cout<<"EJERCICIO_6"<<endl;
 double first_half =half1_input();
 double second_half =half2_input();
  calculus( first_half, second_half);
  return 0;
}