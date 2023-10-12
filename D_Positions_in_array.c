#include<stdio.h>

int main(){

  int n;
  scanf("%d", &n);

  int Arr[n];

  for(int i=0; i<n; i++){

    scanf("%d", &Arr[i]);

    if(Arr[i]<=10){
    
        Arr[i]= Arr[i]; /// aikhne direct print na kore jodi set kore porer ta te korte jai tahole ki korbo????
    }
  }

 for(int i=0; i<n; i++){

    printf("A[%d] = %d\n", i, Arr[i]);
  }
  

  
    return 0;
}