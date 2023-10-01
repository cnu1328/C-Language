//39)	Write a C program to print all Armstrong numbers between 1 to n.

#include <stdio.h>

void main()
{
    int n,n1,am,i=1;
    printf("Enter a number to print all Armstrong numbers form 1 to : ");
    scanf("%d",&n);
    printf("All amstrong numbers from 1 to %d is : ",n);
    while(i<=n){
        am =0;
        n1=i;
        while(n1>0){
            int rem;
            rem = n1%10;
            am += (rem*rem*rem);
            n1=n1/10;
        }
        if(i==am){
            printf("%d, ",i);
        }
        i++;

    }

}
