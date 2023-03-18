#include<iostream>
using namespace std;
int main(){
	double A, B, X, Y, N, AN, BN;

	cout << "Ingrese el costo inicial de su producto y sus datos respectivos"<<endl;
	cin >> N>> A>> B>> X>> Y;
	
	if (A<B && N>A && N<B)
	{
		AN=N/((X/100)+1);
		cout << AN<< endl;
	}
	 else if (A<B && N>B )
	 {
	BN= N/((Y/100)+1);
	cout<< BN<<endl;
	}
	else {
		cout<< N<< endl;
	}
	return 0;
}
//revisar
