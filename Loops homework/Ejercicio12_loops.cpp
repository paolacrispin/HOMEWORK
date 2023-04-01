#include <iostream>
using namespace std;
int main (){
	int a;
	int f=1;
	do{
		cout <<"Ingrese un número"<<endl;
		cin>> a;
		if (a<=0){
			cout<<"negatives numbers are not allowed"<<endl;
		}
		
	}while(a<=0);
	
		for (int i=1; i<=a;++i){
			f*=i;
			if (i==a){
			
			cout << f<<endl;
		}
	} 

}
	

