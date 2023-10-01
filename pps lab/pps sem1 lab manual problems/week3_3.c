/*3.	Write a program which reads two integer values. If the first is lesser print the message “up”.
 If the second is lesser, print the message “down” if they are equal, print the message “equal”
 if there is an error reading the data, print a message containing the word “Error”.*/

#include <stdio.h>

void main()
{
    int n1,n2;
    printf("Enter two numbers :");
    scanf("%d%d",&n1,&n2);
    if(n1<n2)
        printf("UP");
    else if(n2<n1)
        printf("DOWN");
    else if(n1==n2)
        printf("EQUAL");
    else
        printf("ERROR");
}
