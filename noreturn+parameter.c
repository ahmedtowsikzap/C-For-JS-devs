#include<stdio.h>


// no return type r jonno void likhte h0be!!!
void sum (int x , int y){

    int s=x+y;

    printf("%d", s);

    //return s korte parbena
    // no return like anything!!

}

int main(){

int a,b;
scanf("%d %d", &a, &b);

sum(a,b);

// noramly aikhjen print paowar kotha after receiving the value but because there are no return type we used "VOID" like void sum (int x , int y) so we have to print at top of function where we declared the void sum
  
    return 0;
}