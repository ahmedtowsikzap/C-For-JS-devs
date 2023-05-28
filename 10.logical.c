#include<stdio.h>
#include<stdbool.h>

int main(){

    float temp = 35;
    bool sunny = false;

    if(temp >=0 && temp <=30 && sunny){
        printf("\nThe Weather is perfect!");
    }
    else{
        printf("\nThe weather is disturbing!");
    }

    return 0;
}