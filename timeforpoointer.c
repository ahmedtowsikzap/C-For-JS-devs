#include<stdio.h>

int main(){

int x =100;

int *ptr = &x;

printf("x er address %p\n", &x);
printf("ptr er value %p\n", ptr);
printf("ptr er value %p\n", &ptr);
printf("ptr er memory size %d", sizeof(ptr));
  
    return 0;
}