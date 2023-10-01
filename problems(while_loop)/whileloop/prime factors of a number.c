//37)	Write a C program to find all prime factors of a number.

#include <stdio.h>

void main()
{
    int n,i=1,j,c;
    printf("Enter a number to find all prime factors of a number : ");
    scanf("%d",&n);
    printf("Prime factors of %d is : ",n);
    while(i<=n)
    {
        if(n%i==0){
            c=0;
            j=1;
            while(j<=i)
            {
                if(i%j==0)
                    c++;
                j++;
            }
            if(c==2){
                printf("%d, ",i);
            }
        }
        i++;
    }


}

