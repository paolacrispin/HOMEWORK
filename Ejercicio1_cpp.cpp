/*	INPUT money=20, ice=5 
	FOR i=0, money>0, ++i
	money-=ice
	OUTPUT Se compro un helado
	OUTPUT Te queda 'money' para comprar helados
	*/
# include <iostream>
using namespace std;
int main () { 
int M=20;
int H=5;

for (int i=0; M>0; i+=1){
	M-=H;
	cout << "Se compro un helado"<<endl;
	cout << "Te queda "<<M<<" para comprar helados"<<endl;
 	}
}
