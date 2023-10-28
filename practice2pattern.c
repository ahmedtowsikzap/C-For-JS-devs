#include<stdio.h>


char char_to_asii(char c){


    return c;
}

int main(){

    char a;
    scanf("%c", &a);

    int value = char_to_asii(a);

    printf("%d\n", value);


    return 0;
}