#include <iostream>
#include <string>
using namespace std;
int main() {
	string a;
	getline (cin, a);
	
	for (int i=0; i<=a.size();++i){
		if (a[i]== '0'){
			 cout << "No cake :(" << endl;
		}
		else if (a[i]=='1'){
			 cout << "Om-nom-nom :P" << endl;
		}
	}
		return 0;
	}

 


