
#include<stdio.h>
#include<stdlib.h>

int size;

void max_heapify(int a[],int index)
{
    int l=index*2+1;
    int r=index*2+2;
    int largest,temp;
    if(l<=size && a[l]>a[index])
        largest=l;
    else
        largest=index;
    if(r<=size && a[r]>a[largest])
        largest=r;
    if(largest!=index)
    {
        temp=a[index];
        a[index]=a[largest];
        a[largest]=temp;
        max_heapify(a,largest);
    }
}

void q_delete(int a[])
{
    if(size<1)
        printf("ERROR");
    a[0]=a[size];
    size--;
    max_heapify(a,0);
}

void q_insert(int a[],int key)
{
    size=size+1;
    int heapsize=size;
    a[heapsize]=key;
    int p=(heapsize-1)/2;
    int temp;
    while(p>=0)
    {
        if(a[p]<a[heapsize])
        {
            temp=a[heapsize];
            a[heapsize]=a[p];
            a[p]=temp;
            heapsize=p;
            p=(heapsize-1)/2;
        }
        else
            break;
    }
}

void printArray(int A[])
{
    int i;
    for (i=0; i <= size; i++)
        printf("%d ", A[i]);
    printf("\n\n\n");
}

void create_max_heap(int a[])
{
    int i;
    for(i=(size-1)/2;i>=0;i--)
        max_heapify(a,i);
}

void main()
{
    int i,key,j;
    char c;
    printf("Enter the number of Elements:");
    scanf("%d",&size);
    int arr[size];

    printf("\n Enter the elements of the array:\n");
    for(j=0;j<size;j++)
        scanf("%d",&arr[j]);

    size--;

    printf("\nGiven array is: \n\n");
    printArray(arr);

    printf("\nEntered array in max heap form:\n\n");
    create_max_heap(arr);
    printArray(arr);

    do
    {
    printf("\n MENU");
    printf("\n1-INSERTION");
    printf("\n2-DELETION");
    printf("\n3-TRAVERSE");
    printf("\n4-EXIT");
    printf("\n\nEnter the option:");
    scanf("%d",&i);
    switch (i)
      {
      case 1:
          printf("\n\nEnter the element to be inserted:");
          scanf("%d",&key);
          q_insert(arr,key);
        break;
      case 2:
          q_delete(arr);
          break;
      case 3:
          printArray(arr);
          break;
      default:
          exit(0);
      }
      fflush(stdin);
      printf("\n\nDO YOU WANT TO CONTINUE(y OR n):");
      c=getchar();
     }while(c=='y');
}
