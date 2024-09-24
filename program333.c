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
   NODE obj1;
   NODE obj2;
   NODE obj3;

   obj1.data = 11;
   obj1.next=&obj2;

    obj2.data = 21;
    obj2.next=&obj3;

    obj3.data=51;
    obj3.next=NULL;

    Head=&obj1;
    

    return 0;
}