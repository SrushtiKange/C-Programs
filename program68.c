//*****
#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
    printf("\n");//console end letter
}

int main()
{
    int iValue=0;

    printf("Enter frequency of *:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}