#include<stdio.h>

int main(){

 int n;

 scanf("%d", &n);

 int arr[n];

 for(int i=0; i<n; i++){

    scanf("%d", &arr[i]);
 }
  
  int i=0;
  int j=n-1;

  while(i<j){ // condition i==j
    int tmp=arr[i]; // Question
    arr[i]=arr[j];
    arr[j]= tmp;
    i++;
    j--;
  }

  for(int i=0; i<n;i++){
    printf("%d ", arr[i]);
  }
    return 0;
}