//3.	Write a C program to read in a three digit number produce following output
//(Assuming that the input is 347) 3 hundreds, 4 tens, 7 units

#include <stdio.h>

void main()
{
    int n,u,t,h;
    printf("Enter a three digit number : ");
    scanf("%d",&n);
    u=n%10;
    t=(n/10)%10;
    h=n/100;
    if(n%100==0)
        printf("%d hundreds ",h);
    else
        printf("%d hundreds %d tens %d units",h,t,u);

}
