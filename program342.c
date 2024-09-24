#include<stdio.h>
#include<stdlib.h>
//insert last 
struct node
{
    int data;
    struct node *next;

};


typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int No)
{
    PNODE newn=NULL;
   
    //1:allocate dynamic memory for new node
    newn=(PNODE)malloc(sizeof(NODE));

    //2:initialize the memory
    newn->data=No;
    newn->next=NULL;

    //3:if linked list is empty
    if(*First==NULL)
    {
        *First=newn;
    }
    else  //4:if linked list contains atleast one node
    {
        newn->next=*First;
        *First=newn;
       
        
    }

}

void InsertLast(PPNODE First,int No)
{
    PNODE newn=NULL;
    PNODE temp=NULL;
    //1:allocate dynamic memory for new node
    newn=(PNODE)malloc(sizeof(NODE));

    //2:initialize the memory
    newn->data=No;
    newn->next=NULL;

    //3:if linked list is empty
    if(*First==NULL)
    {
        *First=newn;
    }
    else  //4:if linked list contains atleast one node
    {
        temp=*First;
       while(temp->next!=NULL)
       {
        temp=temp->next;
       }
        temp->next=newn;
        
    }

}

void Display(PNODE First)
{
    while(First!=NULL)
    {
        printf("| %d |->\t",First->data);
        First=First->next;
    }
    printf("NULL\n");
}



int main()
{
    PNODE Head=NULL;
    int iRet=0;
    
    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    iRet=Count(Head);

    printf("Number of nodes are:%d\n",iRet );

    InsertLast(&Head,111);
    InsertLast(&Head,121);
    InsertLast(&Head,151);

    Display(Head);

    iRet=Count(Head);

    printf("Number of nodes are:%d\n",iRet );

    return 0;
}