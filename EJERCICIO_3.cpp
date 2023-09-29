#include <iostream>
using namespace std;

void reverse_string(string n, int size_n) {
    // Caso base: Cuando tengamos una cadena vacía
    if (size_n == 0) {
        cout<<" ";
    }
    if (size_n==1){
        cout<<n[0];
    }
    else {
        cout<<n[size_n-1];
        reverse_string(n, size_n-1);
    }
}

int main() {
    string n;
    printf("Ingrese la cadena:\n");
    cin>>n;
    int size_n = n.size();
    reverse_string( n, size_n);
    return 0; 
}