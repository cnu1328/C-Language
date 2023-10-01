#include <stdio.h>

void main()
{
    int n,c=0,i;
    printf("Enter a number to check prime or not : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0)
            c++;
    }
    if(c==2)
        printf("%d is a prime number",n);
    else
        printf("%d is a composite number",n);
}
