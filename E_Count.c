#include<stdio.h>
#include<string.h>

int main(){

  char a[1000001];

  int sum=0;
  
  fgets(a, 1000001,stdin); // eta dele -32 ashtese

  int str = strlen(a);  s

// scanf("%s", a);

  for(int i=0;i<str; i++){

     sum = sum+(a[i]-'0');
  }

  printf("%d", sum);





  
    return 0;
}