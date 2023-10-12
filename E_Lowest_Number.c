#include<stdio.h>
#include<limits.h>

int main(){


int n;

scanf("%d", &n);

int Arr[n];

for(int i=0; i<n; i++){

    scanf("%d", &Arr[i]);
    
}
int min=INT_MAX,postiton;

for(int i=0; i<n; i++){
    if(Arr[i]<min){

        min = Arr[i];
        postiton=i+1;
        
    }
}
       printf("%d %d\n", min, postiton);
}