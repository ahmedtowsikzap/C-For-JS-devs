#include<stdio.h>


void fun(int *arr, int n){


for(int i=0; i<5; i++){

    printf("%d ", arr[i]);
}

}


int main(){
   
   int arr[5] = {15,53,12,52,11};

   fun(arr,5);


   for(int i=0; i<5; i++){

    printf("%d ", arr[i]);

   }

  
    return 0;
}