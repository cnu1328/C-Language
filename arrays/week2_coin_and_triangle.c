#include <stdio.h>
void main()
{
    int t,i,h=0,n;
    scanf("%d",&t);
    while(t--){
        h=0;
        scanf("%d",&n);
        for(i=1;;i++){
            if(n-i>=0)
                h++;
            else
                break;
            n-=i;
        }
        printf("%d\n",h);
    }

}
