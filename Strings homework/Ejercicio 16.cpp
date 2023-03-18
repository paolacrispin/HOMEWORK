/* PSEUDO CODIGO
INPUT age, years_of_experience
IF years_of_experience>=5 and age >=18
OUTPUT Director senior
ELSE-IF 5<years_of_experience>=3 and age >=18
OUTPUT Director de proyecto
ELSE-IF years_of_experience<3 and age >=18
OUTPUT 	Coordinador de proyceto
ELSE
OUTPUT No puede postularse */

/* ENTRADAS
EDAD (AGE), AÒOS DE EXPERIENCIA(YEARS_OF_EXPERIENCE)
SALIDAS
PUESTO DE TRABAJO QUE ES ELEGIBLE*/

#include<iostream>
using namespace std;
int main(){
	int age, years_of_experience;
	cout<< "Ingrese su edad y aÒos de experiencia"<<endl;
	cin >> age>> years_of_experience;

	if (years_of_experience>=5 && age>=18){
		cout << "Director senior"<<endl;
	}
	else if (5<years_of_experience>=3  && age>=18){
		cout << "Director de proyecto"<<endl;
	}
	else if (age>=18 && years_of_experience<3){
		cout << "Coordinador de proyecto"<<endl;
	}
	else{
	cout << "No puede postularse"<<endl;
     }
	return 0;
}

