#include<stdio.h>
void main()
{
    int i,n,key;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter the elements of the array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the number to be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
            printf("\nThe element is found and the index is:%d",i);
    }
}
