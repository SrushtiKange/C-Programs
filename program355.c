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
     printf("NULL<=>");
    while(First!=NULL)
    {
        printf("| %d |<=>",First->data);
        First=First->next;
    }
    printf("NULL\n");

}

int Count(PNODE First)
{
    int Count=0;
     while(First!=NULL)
    {
        Count++;
        First=First->next;
    }
    return Count;

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
     
    PNODE newn=NULL;
    PNODE temp=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->prev=NULL;//$ means this lines are new in code for doubly LL
    newn->data=No;
    newn->next=NULL;

    if(*First==NULL)
    {
        *First=newn;

    }
    else
    {
        temp=*First;
        while(temp->next!=NULL)
        {
            temp=temp->next;

        }
        temp->next=newn;
        newn->prev=temp;//$
        
    }
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
    int iRet=0;

    InsertFirst(&Head,8);
    InsertFirst(&Head,4);
    InsertFirst(&Head,12);

    InsertLast(&Head,5);
    InsertLast(&Head,18);
    InsertLast(&Head,3);

    Display(Head);

    iRet=Count(Head);

    printf("Count of elements are %d",iRet);


    return 0;
}