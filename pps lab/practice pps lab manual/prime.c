#include <stdio.h>

void main()
{
    int c,count=0,i,j;
    for(i=0;;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==2)
        {
            printf("%d, ",i);
            count++;
        }
        if(count==100)
            break;
    }
}
