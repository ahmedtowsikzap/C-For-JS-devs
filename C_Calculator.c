#include<stdio.h>
main()
{
int X,Y;
scanf("%d %d", &X, &Y);

int summation = X + Y;
int multiplication = X * Y;
int subtraction = X - Y;

printf("%d + %d = %d\n",X,Y, summation);
printf("%d * %d = %d\n",X,Y,multiplication);
printf("%d - %d = %d\n",X,Y,subtraction);

return 0;
}