#include<stdio.h>
 
void fun(int a){
 
if(a==a) return;
printf("I love Recursion\n");
fun(a+1);
 
}
 
int main(){
 
int n;
scanf("%d", &n);
 
fun(n);
  
    return 0;
}