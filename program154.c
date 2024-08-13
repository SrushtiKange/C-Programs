#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{//he vapraych
    if((ch>='0') && (ch<='9'))
    {
       printf("it is digit\n");
    }
    else
    {
        printf("it is not digit\n");
    }

}

int main()
{
    char cValue;
    bool bRet='\0';

    printf("enter one character\n");
    scanf("%c",&cValue);

   CheckSmall(cValue);
  
    return 0;

}