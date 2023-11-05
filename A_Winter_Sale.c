#include<stdio.h>

int main(){


  float x;
  float p;
  float original;

  scanf("%f %f", &x, &p);

  original = (p *100) / (x);

  printf("%.2f", original);




//   printf("%.2f %.2f", x, p);
    return 0;
}