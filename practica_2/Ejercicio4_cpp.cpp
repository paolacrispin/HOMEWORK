/*	INPUT i  //donde i es el numero del dia de la semana
	SWITCH i	
    case i==1: OUTPUT lunes
    break
    case i==2: OUTPUT martes
    break
    case i==3: OUTPUT miercoles
    break
    case i==4: OUTPUT jueves
    break
    case i==5: OUTPUT viernes
    break
    case i==6: OUTPUT sabado
    break
    case i==7: OUTPUT domingo
    break
    default: OUTPUT Usted ha ingresado un dia inexistente :(
    */
# include <iostream>
using namespace std;
int main () { 
int i=0;
cin>>i;
switch (i){
	case 1: cout << "Lunes";
	break;
	case 2: cout << "Martes";
	break;
	case 3: cout << "Miercoles";
	break;
	case 4: cout << "Jueves";
	break;
	case 5: cout << "Viernes";
	break;
	case 6: cout << "Sabado";
	break;
	case 7: cout << "Domingo";
	break;
	default: cout<<"Usted ha ingresado un dia inexistente :(";
	}
	return 0;
}

