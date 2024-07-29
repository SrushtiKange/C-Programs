// Title: Check whether the number is in the range of 10 to 20 or not

#include<stdio.h>
#include<stdbool.h>

bool CheckRange(int iNo)
{
    if((iNo >=10) && (iNo<=20))
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter the number");
    scanf("%d",&iValue);

    bRet=CheckRange(iValue);

    if(bRet==true)
    {
        printf("The number is in the range of 10 to 20",iValue);
    }
    else
    {
        printf("The number is not in the range of 10 to 20",iValue);
    }
    return 0;
}
