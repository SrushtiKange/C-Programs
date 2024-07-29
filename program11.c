#include<stdio.h>
#include<stdbool.h>

/*
START
Accept one number as No
If the number is greater than 30 and less than 50
then display message as number is in the range 30 and 50
otherwise
display message as number is not in the range 30 and 50
*/

bool CheckRange(int iNo)
{
    if ((iNo>=30) && (iNo<=50))
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

    printf("Enter a number\n");
    scanf("%d",&iValue);

    bRet=CheckRange(iValue);
    if(bRet== true)
    {
        printf("%d is in the range 30 and 50\n",iValue);
    }
    else
    {
        printf("%d is not in the range 30 and 50\n",iValue);
    }

    return 0;
}