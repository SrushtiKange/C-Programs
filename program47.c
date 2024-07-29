#include<stdio.h>

long int Factorial(int iNo)
{
    int iCnt=0;
   long int Fact=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        Fact=Fact*iCnt;
         
    }
   return Fact;
}


int main()
{
    int iValue=0;
    long int iRet=0;
    printf("Enter the number:  ");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial is %ld",iRet);

    return 0;
}