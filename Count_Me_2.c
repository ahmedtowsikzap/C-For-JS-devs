#include<stdio.h>
#include<string.h>

int main(){


  char s[100001];
  scanf("%s", s);

  int consonent_count = 0;

  for(int i=0; i<strlen(s); i++){

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
{
    
    }
    else{
        consonent_count++;
    }
  }

  printf("%d", consonent_count);
    return 0;
}