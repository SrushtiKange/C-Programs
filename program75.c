//input:5
//output:&&&&&*****$$$$$
//here time complexity is 3N as there are two for loops
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
     {
        printf("&\t");
     }
     printf("\n");
     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
        printf("*\t");
     }
     printf("\n");
     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
        printf("$\t");
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