#include<stdio.h>

int main(){


  int n;
  scanf("%d", &n);
  int max=0;
  int a;
  for(int i=1; i<=n;i++){
     scanf("%d", &a);
     if(a>max){
        max=a;
     }
  }
    return 0;
}