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

  int ans=-1;

  for(int i=0;i<n; i++){

        if(A[i] == x){
            ans=i;
            break;
        }
  }
  printf("%d", ans);
  

    return 0;
}