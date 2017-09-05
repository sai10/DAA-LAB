#include<stdio.h>
void main()
{
    int a[]={12,5,9,34,56};
    int n=5;
    printA(a,n);
    selection_Sort(a,n);
    printA(a,n);
}

void printA(int a[],int n)
{
    int i;
    printf("\n\n");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
}

void selection_Sort(int a[],int n)
{
    int i,j,index,key,temp;
    for(i=0;i<n-1;i++)
    {
        index=i;
        key=a[i];
        for(j=i+1;j<n;j++)
        {
            if(a[j]<key)
            {
                index=j;
                key=a[j];
            }
        }
        temp=a[i];
		a[i]=a[index];
		a[index]=temp;
    }
}
