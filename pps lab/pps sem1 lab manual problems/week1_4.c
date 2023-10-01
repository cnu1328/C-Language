/*4.	Write a C program to read in two integers and display one as a percentage of the other. Typically your output should look like
20 is 50.00% of 40 assuming that the input numbers where 20 and 40. Display the percentage correct to 2 decimal places. */

#include <stdio.h>

void main()
{
    int n1,n2;
    printf("Enter two numbers to display one as a percentage of the other : ");
    scanf("%d%d",&n1,&n2);
    if(n1<n2)
    {
        float per;
        per = (float)n1/n2*100;
        printf("percentage of %d with the %d is %.2f%%",n1,n2,per);
    }
    else
        printf("To get percentage first value should be less than second value");


}

