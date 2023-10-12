#include<stdio.h>

int main(){


  int n;

  scanf("%d", &n);
  int Arr[n];

  for(int i=0; i<n;i++){

    scanf("%d", &Arr[i]);

  }

  for(int i=n-1;i>=0; i--){

    printf("%d ", Arr[i]);
  }
    return 0;
}