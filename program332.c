#include<stdio.h>
#include<stdlib.h>
//self referential structure 8+4 total 12 byte memory

struct node 
{
    int data;
    struct node *next;
};
//it is mot alias name of structure
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    PNODE Head=NULL;
    //struct node *Head = NULL;

    NODE obj;
    //struct node obj;

    return 0;
}