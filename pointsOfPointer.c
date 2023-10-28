#include<stdio.h>

int main(){


  int x =100;
  int *ptr = &x;

  x=200;

  printf("%d\n", x);
  printf("x er value dereference%d", x, *ptr);
    return 0;
}