#include<stdio.h>
#include<string.h>
int main(){


  int n; 

  scanf("%d", &n); // number of testcase
  getchar();
  while(n--){

    char b[1001];
    // scanf("%s", b);
    fgets(b,sizeof(b), stdin);
    // printf("%s", b);
    int len = strlen(b)-1;
    if(len<=10){

        printf("%s", b);
    }
    else{
        printf("%c%d%c\n", b[0], len-2, b[len-1]);
    }

  }
    return 0;
}

//latin letters
//problems in input section
//fgets() and scanf()
