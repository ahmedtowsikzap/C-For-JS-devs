#include<stdio.h>

int main(){


    int x;

    scanf("%d", &x);

    int a;
    int even=0;
    int odd=0;
    int positive=0;
    int negative=0;

    for(int i=1; i<=x;i++){
        scanf("%d", &a);
        if(a%2==0){

          even++;
        }
        else{
            odd++;
        }
        if(a>0){
            positive++;
            // printf("%d\n", a);
        }

        else if(a<0)
        {
            negative++;
        }
        
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);

    return 0;
}