//42)	Write a C program to check whether a number is Strong number or not.
/* strong number is a special number whose sum of the factorial of digits is equal to the original number. For example : 145 is strong number.
Since 1fact + 4fact + 5fact
*/
#include <stdio.h>

int main()
{
    int n,fact,i,numfact=0,n1;
    printf("Enter a number to check number is Strong or not : ");
    scanf("%d",&n);
    n1 = n;
    while(n>0){
        int rem;
        fact =1;
        i=1;
        rem = n%10;
        while(i<=rem){
            fact = fact*i;
            i++;
        }
        numfact += fact;
        n=n/10;
    }
    if(n1==numfact)
        printf("%d is a strong number",n1);
    else
        printf("%d is not a strong number",n1);


}






