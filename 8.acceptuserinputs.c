#include<stdio.h>

int main() {

    /*****
     * For taking a simple integer input and show it on the output

int age;

printf("\nhow old are ya?\n");
scanf("%d", &age);

printf("You are %d years old", age);

    */

//NOW THIS ONE IS TO TAKE STRING A VALUE

char name[25];  //bytes

printf("\nwhats your name??\n");

// scanf("%s", &name); 

//IF USER WANNA INPUT WHITE SPACES THAN THERE IS A FUNCTION WE CAN USE WHICH IS FGETS

fgets(name, 25, stdin);

printf("\nhwlw %s whats up??\n", name);


return 0;
}