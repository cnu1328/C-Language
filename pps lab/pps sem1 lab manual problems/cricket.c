/*2.	Define structure called cricket that will describe the information
player name, team name, batting average. Using cricket, declare an array player
with 10 elements and write program to read information about all 10 players and
print team wise list containing names of the player with their batting average*/

#include <stdio.h>
#include <string.h>
struct cricket
{
    char pname[20],tname[20];
    float bavg;
};

void main()
{

    int n,i,j;
    printf("Enter number of cricket players : ");
    scanf("%d",&n);
    struct cricket c[n],t;
    for(i=0;i<n;i++)
    {
        printf("Enter player name' 'player team' ' and batting avg for player-%d: ",i+1);
        scanf("%s %s %f",c[i].pname,c[i].tname,&c[i].bavg);
    }
    for(i=1;i<n-1;i++)
    {
        for(j=i;j<n-i;j++)
        {
            if(strcmp(c[j-1].tname,c[j].tname)>0)
            {
                t=c[j-1];
                c[j-1]=c[j];
                c[j]=t;
            }
        }
    }
    printf("\nAfter sorting....players list is");
    for(i=0;i<n;i++)
    {
        printf("\n%-20s  %-20s  %.2f",c[i].pname,c[i].tname,c[i].bavg);
    }

}

