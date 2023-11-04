#include<stdio.h>

void fun(int a, int i){

if(i==a) return;
fun(a, i+1);

printf("%d\n", i);

}

int main(){

int n;
scanf("%d", &n);

fun(n,1);
  
    return 0;
}