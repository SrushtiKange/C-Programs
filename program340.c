#include<stdio.h>
#include<stdlib.h>

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
    
    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    return 0;
}