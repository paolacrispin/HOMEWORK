// CPP cuerpo de funciones
#include "practicoloop.h"
#include <iostream>
int get_user_input(){
  int value;
  do {
    cout << "Ingrese un numero" << endl;
    cin >> value; 
    if (value <= 0) {
    cout<< "negatives numbers are not allowed" << endl;
    }
  }while (value <= 0);
  return value;
}
int factorial(int number){
    int calculus=1;
  for (int i = 1; i <= number; ++i) {
      calculus *= i;
   }
   return  calculus;
}
// Function definitions
int result (int base, int expo){
  int answer=1;
for (int i = 1; i <= expo; ++i) {
    answer *= base;
    if (i == expo) {
      return answer;
    }
  }
}
// Function definitions
string get_user_input(){
  string number;
  getline(cin, number);
  return number;
}
void message(string save_number){
for (int i = 0; i <= save_number.size(); ++i) {
      if (save_number[i] == '0') {
      cout<<"No cake :(";
      break;
    } 
    while (i<10){
      if (save_number[i] == '1') {
       cout <<"Om-nom-nom :P"<<endl;
      }
      break;
    }
  }
}
  // Function definitions
int get_user_input_number1(){
int number1;
cin>>number1;
return number1;
}
int get_user_input_number2(){
  int number2;
  cin>>number2;
  return number2;
}
void counter(int first_number, int second_number){
  for (int i = first_number; i <= second_number; ++i) {
      cout<<i<<endl;
  }
}
  // Function definitions
 string get_user_input(){
    string words;
    getline(cin, words);
    return words;
  }
  int counter (string full_name){
    int i=0;
    for (i = 0; i <= full_name.size(); ++i) {
      if (full_name[i] == ' ') {
      return i;
      }
    }
  }
// Function definitions
double half1_input(){
  double half1;
cin >> half1; 
return half1;
}
double half2_input(){
  double half2;
cin >> half2; 
return half2;
}
void calculus(double first_half, double second_half){
  double diferencia2, diferencia1;
  if (first_half == second_half) {
    cout <<"La naranja se divide en dos partes iguales";
  } else if (first_half > second_half) {
    diferencia1 = first_half - second_half;
    cout << "Cortar " << diferencia1 << " de la primera parte" << endl;
  } else if (second_half > first_half) {
    diferencia2 = second_half - first_half;
    cout << "Cortar " << diferencia2 << " de la segunda parte" << endl;
  } else {
  }
}

