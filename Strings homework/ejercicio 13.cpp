#include <iostream>

using namespace std;
int main(){
	int c;
	cin >>c;
	if(c==0){
		cout << "no se encontraron documentos";
	}
	else if (c==1){
		
		cout << " Se encontrò un documento";
	}
	else{
	
		cout << to_string(c) + " documentos encontrados";
	}

	return 0;
}
