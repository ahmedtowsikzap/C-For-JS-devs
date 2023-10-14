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

  for(int i=n; i>=position+1; i--){
    arr[i] = arr[i-1];
  }

  for(int i=0; i<=n; i++){ // or we can use n+1
     printf("%d ", arr[i]);
  }

  arr[position]= value;



  
    return 0;
}