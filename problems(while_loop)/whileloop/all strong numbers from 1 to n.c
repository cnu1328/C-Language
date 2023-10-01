//43)	Write a C program to print all Strong numbers between 1 to n.

#include <stdio.h>

void main(){
    int numfact,fact,n,n1,i=1,j;
    printf("Enter a number to print all Strong numbers between 1 to : ");
    scanf("%d",&n);
    printf("All Strong numbers from 1 to %d is : ",n);
    while(i<=n){
        n1=i;
        numfact=0;
        while(n1>0){
            int rem;
            fact = 1;
            rem = n1%10;
            j=1;
            while(j<=rem){
                fact = fact*j;
                j++;
            }
            numfact += fact;
            n1=n1/10;
        }
        if(i==numfact)
            printf("%d, ",i);
        i++;
    }

}
