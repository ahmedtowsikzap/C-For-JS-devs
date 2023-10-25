#include<stdio.h>

int main(){


  int n,s,k;

  s=0;
  k=2*n-1;

  scanf("%d", &n);

  for(int i=1; i<=n; i++){

  for(int j=1; j<=s; j++){

    printf(" ");

  }
  for(int j; j<=k; j++){

    printf("*");

  }
  s++;
  k = k-2;
  printf("\n");
  }
    return 0;
}