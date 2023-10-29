#include <stdio.h>

void my_abs(int num) {

    int abs;

    if(num<0){
        abs= num * -1;
        printf("%d\n", abs);

    }
    else{


printf("%d\n", num);


    }

}

int main() {
    int num;
    scanf("%d", &num);

    my_abs(num);
    return 0;
}
