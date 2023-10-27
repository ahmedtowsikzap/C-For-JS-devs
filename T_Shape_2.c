#include<stdio.h>

int main(){


  int n, k, s;
 scanf("%d", &n);

 k=1;

 s=n-1;

 for(int i=0; i<n; i++){
   
   for(int j=1; j<=s; j++){

    printf(" ");
   }

   for(int j=1; j<=k; j++){

    printf("*");
   }
   if(i<n){
    s--;
   k= k+2;
   printf("\n");
   }
   else if(i>n){
   s++;
   k= k-2;
   printf("\n");
   }
   
 }

    return 0;
}