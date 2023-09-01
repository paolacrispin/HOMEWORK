#include <stdio.h>
int main (){
FILE *input= fopen("fruit.txt", "r");
if (input==NULL){
    printf("El archivo no existe\n");
    return 1;
}
char buffer [400];
int size= fread(buffer, 1 , 400, input);
FILE *temp= fopen("output/outfile.txt", "w");

char *start = buffer;
char *end = buffer + size - 1;
char t;

while (start < end) {
    t = *start;
    *start = *end;
    *end = t;
    ++start;
    --end;
}

fwrite(buffer, 1, size, temp);

for (int i = 0; i < size; i++) {
  printf("%c", buffer[i]);
}

fclose(input);
fclose(temp);
return 0;
}
