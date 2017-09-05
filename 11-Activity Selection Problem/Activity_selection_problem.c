#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the number of Activities:");
    scanf("%d",&n);
    int s[n],f[n];
    printf("Enter the Start time of the Activities:");
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
      printf("Enter the finish time of the Activities:");
    for(i=0;i<n;i++)
        scanf("%d",&f[i]);
    printf("\nThe following activities are selected:");
    best_activity_selection(s,f,0,n);
}
/*
   //   ITERATIVE  SOLUTION

void best_activity_selection(int s[],int f[],int k,int n)
{
    int i=0, j;
    printf("%d ", i);
    for (j = 1; j < n; j++)
    {
      if (s[j] >= f[i])
      {
          printf ("%d ", j);
          i = j;
      }
    }

}
*/


//RECURSIVE SOLUTION
void best_activity_selection(int s[],int f[],int x,int n)
{

int m=x+1;
if(x>=n)
    return 0;
if(x==0)
     printf("%d ", x);
if (s[m] >= f[x])
    printf ("%d ", m);

    best_activity_selection(s,f,m,n);
}




