#include<stdio.h>
#include<limits.h>

int main(){


  int n;


  scanf("%d", &n);

  int arr[n];

for(int i=0; i<n; i++){
scanf("%d", &arr[i]);

}


int minElement = INT_MAX;


for(int i=0; i<n; i++){
 if(arr[i]<minElement){

    minElement = arr[i];

 }

}

int frequency=0;

for(int i=0; i<n; i++){

    if(arr[i] == minElement){

           frequency++;
    }
}


if(frequency%2 != 0){

    printf("Lucky");
}
else{
    printf("Unlucky");
}


    return 0;
}