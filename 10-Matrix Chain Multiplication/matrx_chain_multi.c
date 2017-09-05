#include<stdio.h>

int matrix_chain_multiplication(int a[],int n)
{
    int m[n][n];
    int i, j, k, L, q;
    for (i = 0; i <= n; i++)
        m[i][i] = 0;
    for (L=2; L<=n; L++)
    {
        for (i=1; i<=n-L+1; i++)
        {
            j = i+L-1;
            m[i][j] = 1000;
            for (k=i; k<=j-1; k++)
            {
                q = m[i][k] + m[k+1][j] + a[i-1]*a[k]*a[j];
                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }

    return m[1][n-1];
}

void main()
{
    int i,n,min;
    printf("Enter the number of number of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter p0,p1,p2,etc of the matrixes:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    min=matrix_chain_multiplication(arr,n);

    printf("Minimum number of multiplications is %d ",min);
}
