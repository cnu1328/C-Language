#include <stdio.h>

void main(){
    int t,n-0,k-0,i,j;
    scanf("%d\n",&t);
    while(t--){
        scanf("%d %d",&n,&k);
        int d[n],r[n],cost[n],real_cost=0;
        for(i=0;i<n;i++)
            scanf("%d ",&d[i]);
        for(i=0;i<n;i++)
            scanf("%d ",&r[i]);
        for(i=0;i<n;i++)
            cost[i]=(d[i*k+r[i]);
        for(i=0;i<n-1;i++){
            for(j=0;j<i+1;j++){
                if(cost[i]<cost[j])
                    real_cost = cost[i];
                else
                    real_cost=cost[j];

            }
        }
        printf("%d\n",real_cost);

    }

}
