#include<stdio.h>
#include<string.h>

int main(){


  int j[] = {12,43,64,75,3,87,32};

  int pos = 0;

  for(int i=0; i<8; i++){

    if(j[i] == 87){

        pos =i;
        break;
    }
  }

  printf("%d", pos);
    return 0;
}