#include<stdio.h>
 void main()
 {
     int a[]={21,34,24,56};
     int n=4;
     printA(a,n);
     insertion(a,n);
     printA(a,n);
 }

void printA(int a[],int n)
{
    int i;
    printf("\n\n");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
}

void insertion(int a[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        j=i-1;
        int key=a[i];
        while(j>=0 && a[j]>key)
            {
                a[j+1]=a[j];
                j--;
            }
        a[j+1]=key;
    }
}

