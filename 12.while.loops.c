#include<stdio.h>
#include<string.h>

int main(){


char name[25];
printf("\nwhat's your name?");
fgets(name, 25, stdin);
name[strlen(name) -1] = '\0';
printf("yo! %s", name);

    return 0;
}