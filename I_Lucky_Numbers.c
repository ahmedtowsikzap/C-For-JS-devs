#include<stdio.h>

int main(){


  int x;

  scanf("%d", &x);
   int num1 = x % 10;
   int num2 = x /10;

   if(num1 % num2 == 0 || num2 % num1 == 0){

    printf("YES");

   }
   else{

    printf("NO");
   }
    return 0;
}