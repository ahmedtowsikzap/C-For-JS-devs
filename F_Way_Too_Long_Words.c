#include<stdio.h>
#include<string.h>
int main(){


  int n; 

  scanf("%d", &n); // number of testcase

  while(n--){

    char a[101];
    scanf("%s", a);
    // fgets(a, 101, stdin);
    int len = strlen(a);
    if(len<10){

        printf("%s\n");
    }
    else{
        printf("%c%d%c\n", a[0], len-2, a[len-1]);
    }

  }
    return 0;
}

//latin letters
//problems in input section
//fgets() and scanf()
