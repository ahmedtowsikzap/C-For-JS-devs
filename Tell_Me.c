#include<stdio.h>

int main(){

    int t;
    scanf("%d", &t);
    for(int i=0; i<t;i++){

 int n;
 scanf("%d", &n);

 int arr[n];

 for(int i=0; i<n; i++){

    scanf("%d", &arr[i]);
 }

 int x;
 scanf("%d", &x);
 int ans=0;

 for(int i=0; i<n; i++){

    if(arr[i] == x){

        ans=1;
        break;
    }

 }

 if(ans == 0){
    printf("NO\n");

 }
 else if(ans == 1){

    printf("YES\n");
 }

    }
    return 0;
}