#include<stdio.h>

int main(){

  int n;
  scanf("%d", &n);

  int Arr[n];

  int b[n];

  for(int i=0; i<n; i++){

    scanf("%d", &Arr[i]);

    if(Arr[i]<=10){
    
    printf("A[%d] = %d\n", i, Arr[i]);
    }
  }

  
    return 0;
}