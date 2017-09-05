#include<stdio.h>
void main()
{
    int i,n,key,start,end,index;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter the elements of the array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the number to be searched:");
    scanf("%d",&key);
    start=0;end=n-1;
    index= binary_search(arr,key,start,end);
    if(index==-1)
        printf("Not found");
    else
        printf("\nThe element is found and the index is:%d",index);
}

int binary_search(int a[],int key,int start,int end)
{
    int mid;
    if(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==key)
            return mid;
        else if(key>a[mid])
            return binary_search(a,key,mid+1,end);
        else
            return binary_search(a,key,start,mid-1);
    }
    else
        return -1;
}
