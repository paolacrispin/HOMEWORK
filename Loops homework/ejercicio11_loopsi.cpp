#include <iostream>
#include <string>
using namespace std;
int main() {
	string x;
	getline(cin,x);
	int t=1;

		for (int i=0; i<=x[2];++i){
     	t*=x[0];
    		if (i==x[2]){
        cout <<t<<endl;
    		}
		}
}
/*Se hizo lo que se pudo :( */
