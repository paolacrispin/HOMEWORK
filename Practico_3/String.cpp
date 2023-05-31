 #include <iostream>//EJERCICI0 1----------------------------------------------------------------------------------------------------
using namespace std;
// Function prototypes
/**
 * @brief Solicita una entrada al usuario la cual es procesada y luego se retorna.
 * @Input  - void
 * @Output - double
 */
double get_user_input1();
/**
 * @brief Solicita una segunda entrada al usuario la cual es procesada y luego se retorna.
 * @Input  - void
 * @Output - double
 */
double get_user_input2();

/**
 * @brief Recibe los dos valores doubles los cuales se utilizan para calcular la parte entera de la suma de los numeros.
 * @Input  - double
 * @Output - int
 */
int calculate_suma(double user_number1, double user_number2);

/**
 * @brief Recibe un valor int el cual se utiliza para preparar un mensaje que se mostrara en la consola.
 * @Input  - int
 * @Output - void
 */
void display_output(int result);
void EJERCICIO_1();
/**
* @brief Solicita una entrada al usuario la cual es procesada y luego se retorna.
 * @Input  - void
 * @Output - double
 */
double get_user_input1();
/**
 * @brief Solicita una segunda entrada al usuario la cual es procesada y luego se retorna.
 * @Input  - void
 * @Output - double
 */
double get_user_input2();

/**
 * @brief Recibe los dos valores doubles los cuales se utilizan para calcular el cociente de los numeros.
 * @Input  - double
 * @Output - double
 */
double calculate_cociente(double user_number1, double user_number2);

/**
 * @brief Recibe un valor double el cual se utiliza para preparar un mensaje que se mostrara en la consola.
 * @Input  - double
 * @Output - void
 */
void display_output(double result);
void EJERCICIO_2();
/**
 * @brief Solicita una entrada al usuario la cual es procesada y luego se retorna.
 * @Input  - void
 * @Output - string
 */
string get_user_input1();
/**
 * @brief Solicita una entrada al usuario la cual es procesada y luego se retorna.
 * @Input  - void
 * @Output - string
 */
string get_user_input2();
/**
 * @brief Invierte el apellido y el nombre
 * @Input  - string
 * @Output - void 
 */
void switch_one(string &name, string &last_name);
void EJERCICIO_3();
/**
 * @brief Solicita una entrada al usuario la cual es procesada y luego se retorna.
 * @Input  - void
 * @Output - int
 */
int get_user_input1();
/**
 * @brief Solicita una segunda entrada al usuario la cual es procesada y luego se retorna.
 * @Input  - void
 * @Output - int
 */
int get_user_input2(); 
/**
 * @brief escoge el puesto de trabajo
 * @Input  - int
 * @Output - string
 */
string puesto(int age_num,int experience_num);
void EJERCICIO_4();
/**
 * @brief Solicita una entrada al usuario la cual es procesada y luego se retorna.
 * @Input  - void
 * @Output - char
 */
char get_user_input1();
 
/**
 * @brief identifica si es mayusccula, minuscula o no alfabetico
 * @Input  - char
 * @Output - string
 */
string char_validation(char char_sample);
void EJERCICIO_5();
/**
 * @brief Solicita una entrada al usuario la cual es procesada y luego se retorna.
 * @Input  - void
 * @Output - int
 */
int get_user_input1();
 
/**
 * @brief identifica si coincide con el collar o no
 * @Input  - int 
 * @Output - string
 */
string validation(int code);
void EJERCICIO_6();
/**
 * @brief Solicita una entrada al usuario la cual es procesada y luego se retorna.
 * @Input  - void
 * @Output - int
 */
int get_user_input1();
/**
 * @brief muestra los documentos encontrados
 * @Input  - int
 * @Output - string
 */
string convertion(int doc_number);
void EJERCICIO_7();
/**
 * @brief Solicita una entrada al usuario la cual es procesada y luego se retorna.
 * @Input  - void
 * @Output - int
 */
int get_user_input1();
/**
 * @brief muestra los documentos encontrados
 * @Input  - int
 * @Output - string
 */
string convertion(int doc_number);
void EJERCICIO_8();

int main() {
  EJERCICIO_1();
  EJERCICIO_2();
  EJERCICIO_3();
  EJERCICIO_4();
  EJERCICIO_5();
  EJERCICIO_6();
  EJERCICIO_7();
  EJERCICIO_8();
  return 0;
}

// Function definitions
double get_user_input1() {
  double number1;
  cout << "please enter your first number" << endl;
  cin >> number1;
  return number1;
}
double get_user_input2() {
  double number2;
  cout << "please enter your second number" << endl;
  cin >> number2;
  return number2;
}

int calculate_suma(double number1, double number2) {
  int suma = number1 + number2;
  return suma;
}

void display_output(int result) {
  cout << "the result is " << result << endl;
}
void EJERCICIO_1() {
  double user_number1 = get_user_input1();
  double user_number2 = get_user_input2();
  int result = calculate_suma(user_number1, user_number2);
  display_output(result);
}
double get_user_input1() {
  double number1;
  cout << "please enter your first number" << endl;
  cin >> number1;
  return number1;
}
double get_user_input2() {
  double number2;
  cout << "please enter your second number" << endl;
  cin >> number2;
  return number2;
}

double calculate_cociente(double number1, double number2) {
  double cociente = number1 / number2;
  return cociente;
}

void display_output(double result) {
  cout << "the result is " << result << endl;
}
void EJERCICIO_2() {
  double user_number1 = get_user_input1();
  double user_number2 = get_user_input2();
  int result = calculate_cociente(user_number1, user_number2);
  display_output(result);
}
string get_user_input1() {
  string name;
  cout << "please enter your name" << endl;
  cin >> name;
  return name;
}
string get_user_input2() {
  string last_name;
  cout << "please enter your last name" << endl;
  cin >> last_name;
  return last_name;
}
void switch_one(string &name, string &last_name){
    string new_place="";
    new_place=name;
    name=last_name;
    last_name=new_place;
}
void EJERCICIO_3() {
 string name= get_user_input1();
  string last_name= get_user_input2();
  cout <<name <<last_name<<endl;
  switch_one( name, last_name);
    cout <<name <<last_name<<endl;
}
int get_user_input1(){
  int age;
  cout << "please enter your age" << endl;
  cin >> age;
  return age;
}
int get_user_input2() {
  int experience;
  cout << "please enter your years of experience" << endl;
  cin >> experience;
  return experience;
}
string puesto(int age_num,int experience_num) {
    if (experience_num >= 5 && age_num >= 18) {
    return  "Director senior";
  } else if (5 < experience_num >= 3 && age_num >= 18) {
    return "Director de proyecto";
  } else if (age_num >= 18 && experience_num < 3) {
    return "Coordinador de proyecto";
  } else {
    return  "No puede postularse";
  }
}
void EJERCICIO_4(){
 int age_num= get_user_input1();
  int experience_num = get_user_input2();
  string puesto_aplicable = puesto (age_num,experience_num);
  cout<<"You can apply to "<<puesto_aplicable<<endl; 
}
char get_user_input1(){
  char character;
  cout << "write below" << endl;
  cin >> character;
  return character;
}

string char_validation(char char_sample) {
    if (char_sample >= 'a' && char_sample <= 'z') {
    return "minuscula";
  } else if (char_sample >= 'A' && char_sample <= 'Z') {
    return "Mayuscula";
  } else {
    return "no es un caracter";
  }
}
void EJERCICIO_5(){
  char char_sample= get_user_input1();
  string result = char_validation(char_sample);
  cout<< result;
}
int get_user_input1(){
  int code_f;
  cout << "write below the code you found" << endl;
  cin >> code_f;
  return code_f;
}

string validation(int code) {
    if (code == 11235813) {
    return "Se encontr� a Fibonacci";
  } else {
    return "Esto no es de Fibonacci";
  }
}
void EJERCICIO_6(){
  int code = get_user_input1();
  string result = validation(code);
  cout<< result;
}
int get_user_input1(){
  int document;
  cout << "write below the number of documents" << endl;
  cin >> document;
  return document;
}

string convertion(int doc_number) {
    string  convert= to_string(doc_number);
  return convert+" documentos encontrados";
}
void EJERCICIO_7(){
int doc_number = get_user_input1();
  cout<< convertion(doc_number);}
int get_user_input1(){
  int document;
  cout << "write below the number of documents" << endl;
  cin >> document;
  return document;
}

string convertion(int doc_number) {
    if (doc_number == 0) {
    return "no se encontraron documentos";
  } else if (doc_number == 1) {
    return " Se encontro un documento";
  } else {
    string  convert= to_string(doc_number);
    return convert + " documentos encontrados";
  }
}
void EJERCICIO_8(){
   int doc_number = get_user_input1();
  cout<< convertion(doc_number);
}