#include<stdio.h>

int main(){

    float item1 = 5.45;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("item1: $%-10.2f\n",item1);
    printf("item2: $%-8.2f\n",item2);
    printf("item3: $%-8.2f\n",item3);

    /*It defines a format a type of data to be displayed 
    place a format specifiers first like 2.4. 8 
    *THEN use a certain chracter of data like %f or double %lf
    * deciamal field width or decimal precision like % .1
    */

   return 0;
}