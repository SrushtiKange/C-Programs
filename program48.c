#include<stdio.h>

unsigned long int Factorial(int iNo)
{
    int iCnt=0;
    unsigned long int Fact=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        Fact=Fact*iCnt;
         
    }
   return Fact;
}


int main()
{
    int iValue=0;
    unsigned long int iRet=0;
    printf("Enter the number:  ");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial is %lu",iRet);

    return 0;
}