#include <iostream>
#include <cctype> 
void to_upper_case(char* province) {
    for (int i=0; province[i]!='\0';++i){
    province[i] = toupper(province[i]);
    }
}
int main(){
char province[]="Quebec";
to_upper_case(province);
for (int i=0; i<7;++i ){
printf("%c", province[i]);
}
return 0;
}