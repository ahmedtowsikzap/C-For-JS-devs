#include<stdio.h>
#include<string.h>

int main(){


  char d[10001];
  scanf("%s", d);
  int cnt [26] ={0};
  for(int i=0; i<strlen(d); i++){

    int value = d[i]-'a';
    cnt[value]++;
  }

  for(int i=0; i<26; i++){
    if(cnt[i]!= 0){

  printf("%c - %d\n", i+'a', cnt[i]);
    }

  
  }
    return 0;
}