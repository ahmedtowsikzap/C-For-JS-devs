#include<stdio.h>

int main(){

int row, col;

scanf("%d %d", &row, &col);

int arr[row][col];

int elelment= row*col;


  

  for(int i = 0; i<row; i++){

    for(int j=0; j<col; j++){

        scanf("%d", &arr[i][j]);

    }
  }

  int count=0;

  for(int i = 0; i<row; i++){

    for(int j=0; j<col; j++){

         if(arr[i][j] == 0){

            count++;
         }

    }
  }


  printf("%d\n", count);

  if(elelment == count){

    printf("Its a zero matrix");
  }
  else{


    printf("It s not zero matrix");
  }






    return 0;
}