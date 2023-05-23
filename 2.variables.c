#include<stdio.h>

int main(){
int x;   // declaration
x = 121; // initilization

int y = 121; // combination of both declaration & intialization

int age = 20; // interger
float GPA = 3.58; // floating point number
char grade = 'A'; // single chracter 
char name[]  ="AHmed"; //Array of chracter

/* More Data types are coming in future */

printf("You are %d years old\n", age); //% d for decimal or placeholder

printf("hellow %s\n", name); //in this case %s is for string data

printf("your average grade is %c\n", grade); // %c for character varibale
printf("Your GPA is literally %f\n", GPA); // %f for float 

return 0;
}