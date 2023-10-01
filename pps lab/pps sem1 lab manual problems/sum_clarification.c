#include <stdio.h>
#include <math.h>
int main()
{
 float sum = 1.0, fact = 1;
int i, j, n, x, p;
printf("enter value of x:");
scanf("%d", &x);
printf("enter n value:");
scanf("%d", &n);
 for (i = 1; i < n; i++)
 {
 int p = i * 2;
fact = 1.0;
 for (j = 1; j <= p; j++)
 {
 fact = fact * j;
 }
 sum = sum + (pow(-1, i) * (pow(x, p)) / fact);
 }
 printf("%d",sum);
}
