#include<stdio.h>
#include<string.h>

int main(){


  int n;
  scanf("%d", &n);
  char d[n];
  scanf("%s", d);
  int sum=0;
  for(int i=0; i<strlen(d); i++){

    sum= sum+(d[i]-'0');
  }

printf("%d", sum);
    

  
    return 0;
}