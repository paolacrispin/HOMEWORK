# include <iostream>
using namespace std;
int main () {
	double half1, half2, dif, dif2;
	cin >> half1>>half2;
	if (half1==half2){
		cout << "La naranja se divide en dos partes iguales"<<endl;
	}
	else if (half1>half2){
		dif= half1-half2;
		cout<<"Cortar "<<dif<<" de la primera parte"<<endl;
	}	
		else  if (half2>half1){
		
		
		dif2= half2-half1;
		cout<<"Cortar "<<dif2<<" de la segunda parte"<<endl;
	}
	else {
	}
	
	return 0;
}
