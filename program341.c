#include<stdio.h>
#include<stdlib.h>
//count cha sir kadun
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

void Count(First!=NULL)
{
    iCnt++;
    First=First->next;
}



int main()
{
    PNODE Head=NULL;
    int iRet=0;
    
    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    iRet=Count(Head);
    printf("Number of nodes are:%d\n",iRet);


    return 0;
}