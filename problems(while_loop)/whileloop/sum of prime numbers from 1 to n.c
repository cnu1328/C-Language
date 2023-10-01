//36)	Write a C program to find sum of all prime numbers between 1 to n.
#include <stdio.h>

void main()
{


    int num,k,sum1=0,c1;
    printf("Enter the number to print sum of prime numbers from 1 to : ");
    scanf("%d",&num);
    k=1;
    while(k<=num){
            c1=0;
            int l=1;
            while(l<=k)
            {
                if(k%l==0){
                    c1++;
                }
                l++;

            }
            if(c1==2)
            {
                sum1 +=k;
            }
            k++;


    }
    printf("Sum of all prime numbers from 1 to %d is %d",num,sum1);

}
