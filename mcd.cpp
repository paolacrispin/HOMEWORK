#include <stdio.h>
int mcd (int a, int b){
    if (b==0){
        return a;
    }
    else {
        return mcd(b, a%b );
    }
}
int main ()
{
    int div = mcd(68, 102);
    printf("%i\n", div);
}