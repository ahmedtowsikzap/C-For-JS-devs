#include<stdio.h>

int main(){

  int n;
  scanf("%d", &n);
  int A[n];


  for(int i=0; i<n; i++){

    scanf("%d", &A[i]);
  }
  
  int x;

  scanf("%d", &x);

  for(int i=0;i<=A[i]; i++){

        if(A[i] == i){
            printf("%d", A[i]);
        }
        else{
            printf("-1");
        }
  }

    return 0;
}