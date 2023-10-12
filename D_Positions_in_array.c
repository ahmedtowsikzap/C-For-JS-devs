#include<stdio.h>

int main(){

  int n;
  scanf("%d", &n);

  int Arr[n];

  for(int i=0; i<n; i++){

    scanf("%d", &Arr[i]);

    if(Arr[i]<=10){
    
        Arr[i]= Arr[i];
    }
  }

 for(int i=0; i<n; i++){

    printf("A[%d] = %d\n", i, Arr[i]);
  }
  

  
    return 0;
}