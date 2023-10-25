#include<stdio.h>

int main(){


  int n,s,k;
  scanf("%d", &n);

  s=n-1;

  k=1;

  for(int i=1; i<(2*n)-1; i++){ // line hocche 1 kom tai 2n-1


//ekta line r khahini
for(int j=1; j<=s; j++){
 
 printf(" ");

}
for(int j=1; j<=k; j++){

printf("*");
}
// line r khahini shesh
s--;
k= k+2;


  


  }
    return 0;
}