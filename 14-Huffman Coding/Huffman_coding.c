#include<stdio.h>

struct node
{

int value;
int freq;
char L;
struct node *left;
struct node *right;

};

struct ctr
{

    char c;
    int f;

};



void Huffman(struct ctr list[])
{
    struct ctr X,Y;
    int size=(sizeof(list))/(sizeof(list[0]));
    struct ctr Q[5];
    int i;
    for(i=0;i<size;i++)
    {
        Q[i].c=list[i].c;
        Q[i].f=list[i].f;
    }
    for(i=0;i<(size-1);i++)
    {
        struct node z;
        z.left=X.c=Extract_MIN(Q,size);
        z.right=Y.c=Extract_MIN(Q,size);
        z.freq=X.f+Y.f;
        INSERT(Q,z);
    }
}

void main()
{
    struct ctr list[5];
    list[0].c='a';
    list[1].c='b';
    list[2].c='c';
    list[3].c='d';
    list[4].c='e';
    list[0].f=4;
    list[1].f=9;
    list[2].f=14;
    list[3].f=19;
    list[4].f=45;

    Huffman(list);
}

