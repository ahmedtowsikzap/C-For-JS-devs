#include<stdio.h>
#include<string.h>

int main(){

  int n;

  scanf("%d", &n);
  getchar();


  while(n--){
    char ch[100];
    gets(ch);
    printf("%s\n", ch);


  }
  
    return 0;
}