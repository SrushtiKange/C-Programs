#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch>='A') && (ch<='Z'))
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
    char cValue;
    bool bRet='\0';

    printf("enter one character\n");
    scanf("%c",&cValue);

    bRet=CheckCapital(cValue);
    if(bRet==true)
    {
        printf("It is capital character\n");
    }
    else
    {
        printf("It is not capital character\n");
    }

  
    return 0;

}