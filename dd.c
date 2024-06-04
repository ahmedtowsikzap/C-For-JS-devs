#include<stdio.h>
#include<math.h>


int primee(int n){

int counter=0;

    for(int i=2; i<=n; i++){
    
    
   int isPrime = 1;

    for(int j=2; j<=sqrt(i); j++){

        if(i%j==0){
         isPrime = 0;
         break;
            
        }
    }
    if(isPrime==1){
 
  counter++;
    }
    

}
return counter;
    
}



int main() {
   


   int x;
   scanf("%d", &x);

   int totalCount = primee(x);

   printf("%d", totalCount);

    
    return 0;
}
