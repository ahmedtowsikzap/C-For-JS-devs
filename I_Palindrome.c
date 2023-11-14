#include<stdio.h>
#include<string.h>

int main(){
 char s[1001];
 scanf("%s", s);

 int len = strlen(s);

 int i=0;
 int j=len-1; 

 while(i<j){

  if(s[i]== s[j]){
   i++;
   j--;
  }
  else{
 printf("NO\n"); 
 return 0;
  }
  
 }

 printf("YES\n");
    return 0;
}