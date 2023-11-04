#include<stdio.h>




void hello(){

    printf("hello\n");
    world();
}

void world(){

    printf("world\n");
}


int main(){

hello();
printf("end");

    return 0;
}