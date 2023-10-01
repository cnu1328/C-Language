
#include <stdio.h>

void main()
{
    int d,m,y;
    printf("Enter your date, month and year in the format dd/mm/yyyy : ");
    scanf("%d/%d/%d",&d,&m,&y);
    if(d>0 && d<32 && m>0 && m<13)
    {
        if(d>0 && d<28)
            d++;
        else if(d==28)
        {
            if(m==2)
                if(y%4==0 && y%100!=0 || y%400==0)
                    d++;
                else
                {
                    d=1;
                    m++;
                }
            else
                d++;
        }
        else if(d==29)
        {
            if(m==2)
            {
                d=1;
                m++;
            }
            else
                d++;
        }
        else if(d==30)
        {
            if(m==4 || m==6 || m==9 || m==11)
            {
                d=1;
                m++;
            }
            else
                d++;
        }
        else if(d==31)
        {
            if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10)
            {
                d=1;
                m++;
            }
            else
            {
                d=1;
                m=1;
                y++;
            }
        }
        printf("Your next date is %d/%d/%d",d,m,y);
    }
    else
        printf("Date should be between 1 to 31 and Month should be between 1 to 12");
}
