#include<stdio.h>
#include<stdbool.h> // for using boolean data types

int main(){


//DATATYPES
float c = 3.14343234;
double d = 3.14343234;

printf("%0.15f\n", c); // simple 0.15 means I wanna see 15 digits. Also you will lose number after decimal
printf("%0.15lf\n", d); // same thing but with double its more perecise it use more memory almost 8 bits


//BOOLEAN
/*To declare a boolean we need to include stdbool  at the top as an import */

bool e = false;     // TRUE OR FALSE 1 is for ture 0 for false 1 byte of memory

//DISPLAY BOOLEAN VARIBALE 

//TO DISPLAY BOOLEAN VARIABLE WE HAVE TO USE %d
printf("%d\n", e);



    return 0;
}