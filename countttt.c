#include<stdio.h>

int main(){

 int n;
 int digits;

 scanf("%d", &n);

int i= 0;
 while(n != 0){

   n = n /10;
   int digit = n;
   i++;
 }
  
  printf("Total Digits of the numbers%d\n", digits);

    return 0;
}