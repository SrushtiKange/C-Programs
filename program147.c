#include<stdio.h>
#include<stdlib.h>

void Swap(int *p,int *q)
{
    int temp=0;

    temp=*p;
    *p=*q;
    *q=temp;

}

int main()
{
    int A=0,B=0;

    printf("Enter the first number\n");
    scanf("%d",&A);

    printf("Enter the second number\n");
    scanf("%d",&B);

    Swap(&A,&B);

    printf("After swapping\n");
    printf("A is %d\n",A);
    printf("B is %d\n",B);

    return 0;
}