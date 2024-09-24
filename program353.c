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
    return 0;

}

void InsertFirst(PPNODE First, int No)
{
   
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->prev=NULL;//$
    newn->data=No;
    newn->next=NULL;

    if(*First==NULL)
    {
        *First=newn;

    }
    else
    {
        newn->next=*First;//1
        (*First)->prev=newn;//2

        *First= newn;//3
    }



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

    InsertFirst(&Head,8);
    InsertFirst(&Head,4);
    InsertFirst(&Head,12);


    return 0;
}