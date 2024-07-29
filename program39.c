

/*
Accept number as No
Search all its factors
Perform addition of all factors
If addition is same as No
then display No is perfect number
otherwise display no is not perfect number
*/

#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect(int iNo)
{
    int iCnt=0;
    int iSum=0;

    if(iNo<0)    //updater
    {
       iNo= -iNo;

    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iSum=iSum+iCnt;
        }

    }
    if(iSum==iNo)
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
    scanf("%d",&iValue)

    bRet=CheckPerfect(iValue)

    if(bRet==true)
    {
        printf("%d is perfect number",iValue);
    }
    else
    {
        printf("%d is not perfect number",iValue);
    }

    return 0;
}

//prg 40 and 41 of updater