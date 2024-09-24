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
    PNODE newn=NULL;
    PNODE temp=NULL;
    int iLength=0,i=0;

    iLength=Count(*First);

    if((iPos<1) || (iPos>iLength+1))
    {
        printf("Invalid pos");
        return;
    }
    if(iPos==1)
    {
        InsertFirst(First,No);
    }
    if(iPos==iLength+1)
    {
        InsertLast(First,No);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));

        newn->data=No;
        newn->prev=NULL;
        newn->next=NULL;

        temp=*First;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;//$
        temp->next=newn;
        newn->prev=temp;//&


    }
    
}

void DeleteFirst(PPNODE First)
{
    if(*First==NULL)
    {
        printf("LL is empty");
        return;

    }
    else if((*First)->next==NULL)//case 2
    {
        free(*First);
        *First=NULL;

    }
    else//case 3
    {
        *First=(*First)->next;
        free((*First)->prev);
        (*First)->prev=NULL;

    }

}

void DeleteLast(PPNODE First)
{
    PNODE temp=NULL;

     if(*First==NULL)
    {
        printf("LL is empty");
        return;

    }
    else if((*First)->next==NULL)//case 2
    {
        free(*First);
        *First=NULL;

    }
    else//case 3
    {
        temp=*First;

        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
    
}

void DeleteAtPos(PPNODE First,int iPos)
{
    PNODE newn=NULL;
    PNODE temp=NULL;
    int iLength=0,i=0;

    iLength=Count(*First);

    if((iPos<1) || (iPos>iLength))
    {
        printf("Invalid pos");
        return;
    }
    if(iPos==1)
    {
        DeleteFirst(First);
    }
    if(iPos==iLength)
    {
        DeleteLast(First);
    }
    else
    {
        
        temp=*First;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
       temp->next=temp->next->next;
       free(temp->next->prev);
       temp->next->prev=temp;

    }
}

int main()
{
    PNODE Head=NULL;
    int iRet=0;

    InsertFirst(&Head,8);
    InsertFirst(&Head,4);
    InsertFirst(&Head,12);

    Display(Head);
    iRet=Count(Head);
    printf("Number of nodes are : %d\n",iRet);  

    InsertLast(&Head,5);
    InsertLast(&Head,18);
    InsertLast(&Head,3);

    Display(Head);
    iRet=Count(Head);
    printf("Number of nodes are : %d\n",iRet);  

    DeleteFirst(&Head);
    Display(Head);
    iRet=Count(Head);
    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&Head);
    Display(Head);
    iRet=Count(Head);
    printf("Number of nodes are : %d\n",iRet);

    InsertAtPos(&Head,11,5);
    Display(Head);
    iRet=Count(Head);
    printf("Number of nodes are : %d\n",iRet); 

    DeleteAtPos(&Head,5);
      Display(Head);
    iRet=Count(Head);
    printf("Number of nodes are : %d\n",iRet); 

    iRet=Count(Head);

    return 0;
}