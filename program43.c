#include<stdio.h>
#include<stdbool.h>
bool CheckPrime(int iNo)
{
    int iCnt=0;
    int iCount=0;

    if(iNo<0)    //updater
    {
       iNo= -iNo;

    }
    for(iCnt=2;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iCount++;
            break;
        }

    }
    if(iCount==0)
    {
        return true;
    }
    else
    {
        return false;
    }
   
}


int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter the number");
    scanf("%d",&iValue);

    bRet=CheckPrime(iValue);

    if(bRet==true)
    {
        printf("%d is prime number",iValue);
    }
    else
    {
        printf("%d is not prime number",iValue);
    }

    return 0;
}

//prg 40 and 41 of updater