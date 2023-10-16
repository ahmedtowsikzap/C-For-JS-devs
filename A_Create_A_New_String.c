#include<stdio.h>
#include<string.h>

int main(){

    char a[1001]; // constraints dekhe
    char t[1001]; // constrains dekhe +1 beshi dibo 
    scanf("%s %s", a,t); // input nibo

     int lenA = strlen(a); // length bahir korbo

     int lenT = strlen(t); // length bahir korar jonno jeta loop deya kora jai
     printf("%d %d\n", lenA, lenT); // then value ta print kore dibo and thats it!
     printf("%s %s\n", a,t);


     

  
    return 0;
}