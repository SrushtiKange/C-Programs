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

void Display(PNODE First)
{

}

int Count(PNODE First)
{

}

void InsertFirst(PPNODE First, int No)
{

}

void InsertLast(PPNODE First, int No)
{
    
}

void InsertAtPos(PPNODE First, int No,int iPos)
{
    
}

void DeleteFirst(PPNODE First)
{

}

void DeleteLast(PPNODE First)
{
    
}

void DeleteAtPos(PPNODE First,int iPos)
{
    
}

int main()
{
    PNODE Head=NULL;


    return 0;
}