#include<stdio.h>

int main(){


  int n;

  scanf("%d", &n);
  int arr1[n];

  for(int i=0; i<n;i++){
    scanf("%d", &arr1[i]);

  }

  int m;

  scanf("%d", &m);
  int arr2[m];

  for(int i=0; i<m; i++){
    scanf("%d", &arr2[i]);
  }

  int finalArr[m+n];

  for(int i=0; i<n; i++){

    finalArr[i] = arr1[i];

  }

  int i=n; // 
  for(int j=0; j<m; j++){

    finalArr[i] = arr2[j];
    i++; // array size
  }

  for(int i=0; i<n+m; i++){

    printf("%d ", finalArr[i]);
  }
  
    return 0;
}