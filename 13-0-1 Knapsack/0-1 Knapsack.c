#include<stdio.h>

void main()
{
    int n,i,j=0,w,s=0,m=0;
    printf("Enter the number of items:");
    scanf("%d",&n);
    int a[n][2];
    printf("Enter the weight and cost of each item:");
    for(i=0;i<n;i++)
    {
        printf("\n\n%d item: ",i+1);
        j=0;
        while(j!=2)
        {
            scanf("%d",&a[i][j]);
            j++;
        }
    }

printf("\nEnter the Max weight a thief can carry:");
scanf("%d",&w);

s=a[0][0];
m=a[0][1];

    for(i=1;i<n;i++)
    {
        if((s+a[i][0])<=w)
            {
                s=s+a[i][0];
                m=m+a[i][1];
            }
        else
            break;
    }

    printf("The total weight a thief can carry is: %d which is worth: %d\n\n\n",s,m);

}

