#include <stdio.h>

void main()
{
    int n=10;
    printf("Enter a number to check even or odd : ");
    //scanf("%d",&n);
    n%2==0?printf("%d is even number",n):printf("%d is odd number",n);

    printf("\n");

    int a=3,b=5,c=8;
    printf("Enter the three values to check which one is greater : ");
    //scanf("%d%d%d",&a,&b,&c);
    a>b?a>c?printf("%d is greater number than %d and %d",a,b,c):printf("%d is greater number than %d and %d",c,a,b):b>c?printf("%d is greater than %d and %d",b,a,c):printf("%d is greater than %d and %d",c,a,b);

    /*small number*/
    printf("\n");

    a<b?a<c?printf("%d is smallest number between %d and %d",a,b,c):printf("%d is smallest number between %d and %d",c,a,b):b<c?printf("%d is smallest number between %d and %d",b,a,c):printf("%d is smallest number between %d and %d",c,a,b);




    /*divisible by three*/
    printf("\n");
    n%3==0?printf("%d is divisible by 3",n):printf("%d is not divisible by 3",n);

    printf("\n");
    n>0?printf("%d is positive number",n):printf("%d is a negative number",n);
    printf("\n");

    int y=13;
    y==18?printf("You are eligible for voting"):printf("You are not eligible for voting");
    printf("\n");

    int marks = 25;
    marks>=35?printf("You are passed"):printf("You are failed");

    int tem = 45;
    printf("\n");

    (tem >=0 && tem <= 10)?printf("cool temperature"):printf("Hot weather");






}
