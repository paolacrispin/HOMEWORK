# include <iostream>
using namespace std;
int main () {
	string c1, c2, c3, r;
	cout << "Enter each color in order"<< endl;
	cin >> c1>> c2 >>c3>>r;
	if (c1==r && c2!=r && c3!=r){
		cout << "Enter the house 1"<<endl;
	}
	else if (c2==r && c3!=r && c1!=r){
		cout << "Enter the house 2"<<endl;
	}
	else if (c3==r && c1!=r && c2!=r){
		cout << "Enter the house 3"<<endl;
	}
	else {
		cout <<"Seek somewhere else"<<endl;
	}
	return 0;
}
