#include<stdio.h>

int main(){

int n;

scanf("%d", &n);

int a[n];
for(int i=0; i<n; i++){

    scanf("%d", &a[i]);
}

int x;
scanf("%d", &x);


int flag= -1;

for(int i=0;i<n-1; i++){

    for(int j =i+1; j<n; j++){
       
        if(a[i]+ a[j] == x){

            flag=1;
        }
    }
}
  if(flag == -1){

    printf("NO");
  }
  else{

    printf("YES");
  }
    return 0;
}