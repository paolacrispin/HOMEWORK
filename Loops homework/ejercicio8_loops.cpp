 #include <iostream>
#include <string>
using namespace std;
int main() {
    string words;
	getline (cin, words);
	
	for (int i=0; i<=words.size(); ++i){
	
		if ( words[i] == ' ' ){
			string war=words [i];
		cout << "["<< war<<"]" ;
		}
	}

	return 0;
}

