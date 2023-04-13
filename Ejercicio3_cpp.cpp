/*	INPUT numero
	i=0
	WHILE numero>=1
	binario=numero%2
	save=save+to_string(binario)
	numero/=2
	    WHILE save.size()>=i && numero<=i
		char reverse=save[save.size()-1-i]
		cout<<reverse;
		++i;
	*/
# include <iostream>
# include <string>
using namespace std;
int main () { 
    string mn;
int n,m;
int i=0;
cin>> n;
while (n>=1){
	m=n%2;
	mn=mn+to_string(m);
	n/=2;
	    while(mn.size()>=i && n<=i){
		char binario=mn[mn.size()-1-i];
		cout<<binario;
		++i;
	}
	}
}
