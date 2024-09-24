#include<stdio.h>
#include<stdlib.h>
//self referential structure 8+4 total 12 byte memory

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

int main()
{
    struct node *Head = NULL;

    struct node obj;

    return 0;
}