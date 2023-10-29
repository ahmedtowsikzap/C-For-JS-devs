#include<stdio.h>
#include<string.h>


int is_palindrome(char *arr){

    int len = strlen(arr);

 int i=0;
 int j=len-1;
 while(i<j){

  if(arr[i] == arr[j]){
   i++;
   j--;
  }
  else{
 return 1;
  }
  
 }
    return 0;

  

}

int main(){

char arr[1001];

scanf("%s", arr);

int checker = is_palindrome(arr);

 if(checker == 1){

    printf("Not Palindrome");
 }
 else{

    printf("Palindrome");
 }
 


  
    return 0;
}