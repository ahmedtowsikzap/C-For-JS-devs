#include<stdio.h>

int main(){

  char x;
  int u;

  scanf("%c", &x);

  if(x>='a' && x<'z' ||x>='A' && x<'Z'){
    u=x+1;

  }
  else if(x=='z' || x=='Z'){

    u = 'a';
  }

  printf("%c",u);
    return 0;
}