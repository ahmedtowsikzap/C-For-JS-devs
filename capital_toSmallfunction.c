#include<stdio.h>


char capital_to_small(char a){

    a = a+32;

    return a;
}

int main(){

char a;

scanf("%c", &a);

char para = capital_to_small(a);

printf("%c", para);
  
    return 0;
}