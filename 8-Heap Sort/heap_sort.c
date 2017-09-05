#include<stdio.h>

void max_heapify(int a[],int index,int size)
{
    int l,r;
    l=2*index+1;
    r=2*index+2;
    int largest;
    int temp;
    if(l<size && a[l]>a[index])
        largest=l;
    else
        largest=index;
    if(r<size && a[r]>a[largest])
        largest=r;
    if(largest!=index)
    {
        temp=a[largest];
        a[largest]=a[index];
        a[index]=temp;
        max_heapify(a,largest,size);
    }
}

void build_max_heap(int a[],int size)
{
    int i;
    for(i=(size)/2;i>=0;i--)
        max_heapify(a,i,size);
}

void heap_sort(int a[],int size)
{
    build_max_heap(a,size);
    int i,temp;
    for(i=size;i>0;i--)
    {
        temp=a[i-1];
        a[i-1]=a[0];
        a[0]=temp;
        size--;
        max_heapify(a,0,size);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);

}

void main()
{
    int n,i;

    printf("Enter the no. of elements to be entered in the array:");
    scanf("%d",&n);

    int arr[n];

    printf("\n Enter the elements of the array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Given array is \n");
    printArray(arr,n);

    heap_sort(arr,n);

    printf("\nSorted array is \n");
    printArray(arr,n);
}
