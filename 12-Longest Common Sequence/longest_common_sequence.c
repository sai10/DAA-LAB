#include<stdio.h>
#include<string.h>

int max(int a, int b)
{
    return (a > b)? a : b;
}

int lcs_length(char x[],char y[],int m,int n)
{
    char c[m][n];
    int i,j;
    for(i=0;i<=m;i++)
        c[i][0]=0;
    for(i=0;i<=m;i++)
        c[0][i]=0;
    for (i=0; i<=m; i++)
   {
    for (j=0; j<=n; j++)
     {
       if (x[i] == y[j])
         c[i][j] = c[i-1][j-1] + 1;

       else
         c[i][j] = max(c[i-1][j], c[i][j-1]);
     }
   }
 return c[m][n];
}

void main()
{
    char x[50],y[50];
    int i,m,n,length;
    printf("Enter the string 1:");
    gets(x);
    printf("Enter the string 2:");
    gets(y);

    m=strlen(x);
    n=strlen(y);

    length=lcs_length(x,y,m,n);

    printf("Length of the LCS is :%d",length);

}
