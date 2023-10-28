#include<stdio.h>


char small_to_capital(char a){

    a = a-32;

    return a;
}

int main(){

char a;

scanf("%c", &a);

char para = small_to_capital(a);

printf("%c", para);
  
    return 0;
}