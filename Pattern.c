#include <stdio.h>

int main()
{

  int n, k, s;
  scanf("%d", &n);

  k = 1;

  s = n - 1;

  for (int i = 1; i <= (2 * n)-1; i++)
  {

    for (int j = 1; j <= s; j++)
    {

      printf(" ");
    }

    for (int j = 1; j <= k; j++)
    {
        if(i%2==0){
            printf("-");
        }
        else{
      printf("#");

        }

    }
    
    
    if (i <= n-1)
    {
      s--;
      k = k + 2;
    }
    else if (i >= n)
    {
      s++;
      k = k - 2;
    }
      printf("\n");

  }
  

  return 0;
}