#include<stdio.h>


int char_to_asii(int c){


    return c;
}

int main(){

    char a;
    scanf("%c", &a);

    int value = char_to_asii(a);

    printf("%d\n", value);


    return 0;
}