#include<stdio.h>


// return _type name(paramter){

//     __code_model_32__
//     return what? 
// }

int sum(int x, int y ){

    int sum=x+y;

    return sum;
}

int main(){

  int total = sum(10, 20);

  printf("%d", total);
    return 0;
}