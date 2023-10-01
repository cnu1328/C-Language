//41)	Write a C program to print all Perfect numbers between 1 to n.

#include <stdio.h>

void main(){
    int n,p,i=1,d;
    printf("Enter a number to print all the Perfect numbers from 1 to : ");
    scanf("%d",&n);
    printf("All Perfect numbers from 1 to %d is : ",n);

    while(i<=n){
        p = 0;
        int j=1;
        while(j<i){
            if(i%j==0){
                p += j;
            }
            j++;
        }
        if(i==p)
            printf("%d, ",i);
        i++;
    }

}

