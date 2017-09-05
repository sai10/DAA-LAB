#include<stdio.h>
void main()
{
    int a[]={31,41,59,26,41,58};
    int n=6;
    printA(a,n);
    bubble_sort(a,n);
    printA(a,n);
}
void printA(int A[],int n)
{
	int i;
	for (i=0;i<n;i++) {
		printf("%d   ",A[i]);
	}
	printf("\n");
}

void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
