#include <iostream>

using namespace std;
int main ()
{
int a, b, total, suma;
cin>> a>>b;
suma=a+b;
string c= to_string(suma);
int F= c.size();

total=suma*F;
cout << total<< endl;
	return 0;
}
