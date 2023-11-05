#include<stdio.h>

int main(){

int n, m;

scanf("%d %d", &n, &m);

int arr1[n][m], b[n][m], c[n][m];


for(int i=0; i<n; i++){

    for(int j=0; j<m; j++){

        scanf("%d", &arr1[i][j]);
    }
}

for(int i=0; i<n; i++){

    for(int j=0; j<m; j++){

        scanf("%d", &b[i][j]);
    }
}

for(int i=0; i<n; i++){

    for(int j=0; j<m; j++){

        c[i][j]=arr1[i][j] + b[i][j];
    }
}


for(int i=0; i<n; i++){

    for(int j=0; j<m; j++){

        printf("%d ", c[i][j]);
    }
    printf("\n");
}



return 0;
}