#include<stdio.h>

void fun(){

    printf("hello\n");
    fun();
}

int main(){


  fun();
    return 0;
}