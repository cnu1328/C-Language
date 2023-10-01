/*
Chef is a class teacher. He has n students in his class.

Chef recently conducted an exam. The scores of all the n students is given to you. His students are very competitive and will start fighting if there is more than one student who topped the exam. It is your job to figure out whether his students will start fighting or not, so that Chef can go prepared to the class.

Input
The first line of each test case contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains an integer n, denoting the number of students.
The next line contains n space-separated integers, i-th of which will be scorei denoting the score of the i-th student.
Output
For each test case, output in a new line, "fight:(" if there is more than one topper, otherwise output "peace:)" (without quotes).

Constraints
1≤T≤10
1≤n≤105
1≤scorei≤109
Subtasks
For 30% of the score: 1≤n≤100
Remaining 70%: No extra constraints.
Sample Input
3
3
1 2 3
3
2 1 2
4
3 2 4 2
Sample Output
peace:)
fight:(
peace:)
Explanation
In the first case, there is only one topper, the third student.
In the second case, there are two toppers, the first and third student.
In the third case, only one guy got a score of 4 (the highest score), and so there is only one topper: the third student.
*/
#include <stdio.h>

void main()
{
    int t,n,i,j,max;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n],c=0;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        max = a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
                max = a[i];
        }
        printf("%d",max);
        for(i=0;i<n;i++)
        {
            if(max==a[i])
            {
                c++;
            }
        }

        if(c>0)
            printf("fight:(\n");
        else
            printf("peace:)\n");
    }
}
