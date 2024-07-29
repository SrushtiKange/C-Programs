//input:5
//output:12345*****
//here time complexity is 2N as there are two for loops
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
     {
        printf("%d\t",iCnt);
     }
     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
        printf("*\t");
     }
     printf("\n");
}

int main()
{
    int iValue=0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}