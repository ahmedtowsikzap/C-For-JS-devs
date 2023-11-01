#include<stdio.h>

int main(){


  int n=9;

  int space= 0;

  int k=n;

for(int i=1; i<=n; i++){
    for(int j=1; j<=space; j++){
        printf(" ");
    }
    for(int j=1; j<=k; j++){

        printf("*");
    }
    printf("\n");

    space++;
    k--;
}
}