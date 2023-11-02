#include<stdio.h>

int main(){

 // 2d declare array

 int row, col;


 scanf("%d %d", &row, &col);


 int arr[row][col];

 for(int i=0; i<row; i++){
      for(int j=0; j<col; j++){

        scanf("%d", &arr[i][j]);
      }
  }




for( int i = 0; i<row; i++){

    printf("%d" , arr[i][1]);
}
// int e=2;


//  for( int i=0; i<col; i++){

//     printf("%d ", arr[e][i]);
//  }








// for(int i=0; i<row; i++){
//       for(int j=0; j<col; j++){

//         printf("%d ", arr[i][j]);
//       }
//       printf("\n");
//   }
    return 0;
}