#include <stdio.h>

void main()
{
    int a,*p;
    scanf("%d",&a);
    p=&a;
    printf("%d\n",a);//5
    printf("%d\n",&a);//6422036
    printf("%d\n",p);//6422036
    printf("%d\n",*p);//5

    int b,c;
    printf("Enter two numbers to swap : ");
    scanf("%d%d",&b,&c);
    swap(b,c);
    printf("%d%d",b,c);
}

int swap(int b,int c)
{
    int t;
    t= b;
    b=c;
    c=t;
    //with pointers it is possible open swap in pointers
}
