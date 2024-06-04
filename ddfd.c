#include<stdio.h>

int main(){

  int n,s,k;

 s= n-1;
 k=1;

  scanf("%d", &n);


for(int i=0; i<n; i++){

    for(int j=0; j<s; j++){

    printf(" ");
    }
    for(int j=0; j<k; j++){
        printf("*");
    }
    printf("\n");
    k++;
    s--;
}

    return 0;
}