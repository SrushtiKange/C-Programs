#include<stdio.h>
#include<stdlib.h>
//1 pointer 8 + 1 pointer 8 + 1 integer 4 = 20
struct node
{
    int data;
    struct node *next;
    struct node *prev;  //$
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    PNODE Head=NULL;


    return 0;
}