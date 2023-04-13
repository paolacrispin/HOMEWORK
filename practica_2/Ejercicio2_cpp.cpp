/*	INPUT number
	p= to_string number
	i=0
	WHILE i<p.size()
		IF p[i]==p[(p.size()-1)-i]
		anwser="Es palindromo";
    
    	ELSE
    	anwser="no es palindromo";
    	break;
    
    ++i
OUTPUT answer
	*/
# include <iostream>
# include <string>
using namespace std;
int main () { 
string anwser;
int n=0;
cin >>n;
string p=to_string(n);
int i=0;
while (i<p.size()){
	if (p[i]==p[(p.size()-1)-i]){
	 anwser="Es palindromo";
    }
    else {
    anwser="no es palindromo";
    break;
    }
    ++i;
}
cout<< anwser<<endl;
}
