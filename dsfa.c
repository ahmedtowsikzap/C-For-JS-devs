#include<stdio.h>

int main(){


int n;
int k=1;

scanf("%d", &n);

for(int i=0; i<n; i++){

for(int j=0; j<n; j++){

printf("%d", j);
}
k++;

}
    return 0;
}