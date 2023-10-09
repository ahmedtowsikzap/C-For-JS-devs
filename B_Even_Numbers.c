#include<stdio.h>

int main(){


  int d;

  scanf("%d", &d);

  if(d==1){

    printf("-1\n");
  }
  else{
    for(int i=1; i<=d;i++){

        if(i%2 == 0){

            printf("%d\n", i);
        }
    }
  }
    return 0;
}