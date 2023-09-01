#include <iostream>
#include <stdio.h>
struct Address {
char Houseno[20], Street[30], City[25];
long int Pincode;
};
struct Employee {
char Name[30];
int Age;
struct Address add;
float Salary;
};
void allocateSpace(Address *&direction, Employee*&empl){
    direction= (Address*)malloc(sizeof(Address));
    empl= (Employee*)malloc(sizeof(Employee));
}
int main() {
Address *direction;
Employee *empl;
allocateSpace(direction, empl);
int direction_Address= sizeof(Address);
int direction_Employee= sizeof(Employee);
printf("%i %i", direction_Address, direction_Employee);
free(direction);
free(empl);
}