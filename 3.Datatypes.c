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


// A WHOLE INTEGER -128 to +127 to a char

char f = 120;
printf("%c\n", f);

//UNSIGNED KEYWORD 
unsigned char g = 146;
printf("%d", g);


//SHORT INTGERS
//WE DONT HAVE TO WRITE INT IF WE WANNA USE SHORT  OR UNSIGNED SHORT TO THE CODE


// INTGERS VALUES ARE USUALLY STORED FOR NEAGATIVE 2 BILLION AND POSITIVE 2 BILLION AND ITS ALSO CALLED SIGNED INTERGERS

//FOR UNSIGNED INTERGERS RANGE CHANGES TO 0 TO 4 BILLION


    return 0;
}