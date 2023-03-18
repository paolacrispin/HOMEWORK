#include <iostream>
using namespace std;
int main(){
	char d;
	cin>> d;
	if (d>'a' && d<'z')
	{cout <<"minuscula"<<endl;
	}
	else if (d>'A' && d<'Z')
	{ cout <<"Mayuscula"<<endl;
	}
else {
	cout<<"no es un caracter";
}	
return 0;
}

