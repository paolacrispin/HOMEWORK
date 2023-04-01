#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double a,b,c,x,y;
	cin >>a>>b>>c;
	y=(pow(b,2)-(4*(a)*(c)));
	if (a==0 && b!=0){
		x= -(c/b);
		cout << x<<endl;
	}
	 else if (y>=0){
			double h=((-b+(sqrt(y)))/(2*a));
			double j=((-b-(sqrt(y)))/(2*a));
			cout << h<< j <<endl;
		}
	}
