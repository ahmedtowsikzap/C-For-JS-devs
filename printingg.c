#include<stdio.h>

int main(){


  int row;

  scanf("%d", &row);

  int space = row-1;


  for(int i=1; i<=row; i++){

    for(int j=1; j<=space; j++){

        printf(" ");
    }

    for(int j = 1; j<=(2*i)-1; j++){

        if(j==1 || i==row || j==(2*i)-1){ // * //
        printf("*");

        }
        else{
              printf(" ");
    }

    } 
    
    
    space--;
    printf("\n");
  }
    return 0;
}