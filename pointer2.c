#include<stdio.h>

int main(){

  double x= 5.26;

  double *ptr = &x;
  double *ptr2 = ptr;

  *ptr = 10.30;

  printf("%0.2lf\n", x);
  printf("%0.2lf\n", *ptr);
  printf("%d\n", sizeof(ptr));
  
    return 0;
}