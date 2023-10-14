#include<stdio.h>

int main(){

  int n;
  scanf("%d", &n); //5

  int arr[n+1]; 

  for(int i=0; i<n;i++){

    scanf("%d", &arr[i]);
  }

  int position;
  int value;

  scanf("%d %d", &position,&value);

  for(int i=n; i>=position+1; i--){ // Problem in this LOOP 
    arr[i] = arr[i-1];
    // Arr[x] = Arr[x-1] 
  }

  for(int i=0; i<=n; i++){ // or we can use n+1
     printf("%d ", arr[i]);
  }

  arr[position]= value; // set the value of x position whatever I want!!


  for(int i=0; i<n; i++){ // print the updated array
     printf("%d ", arr[i]);
  }



  
    return 0;
}