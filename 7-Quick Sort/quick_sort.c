
#include<stdio.h>

void quick_sort(int a[],int p,int q)
{
    int r;
    if(p<q)
        {
            r=partition(a,p,q);
            quick_sort(a,p,r-1);
            quick_sort(a,r+1,q);
        }
}

int partition(int a[],int p,int q)
{
    int pivot=a[q];
    int i,j,temp;
    i=p;
    for(j=p;j<=q-1;j++)
    {
        if(a[j]<pivot)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
        }
    }
    temp=a[i];
    a[i]=a[q];
    a[q]=temp;

    return i;
}


void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf(" %d ", A[i]);
    printf("\n");
}

void main()
{
    int n;
    printf("Enter the no of elements to be entered:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array:\n");
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Given array is \n");

    printArray(arr,n);

    quick_sort(arr,0,n-1);

    printf("\nSorted array is \n");

    printArray(arr,n);
}
