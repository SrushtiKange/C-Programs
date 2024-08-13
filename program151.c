#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{//he vapraych
    if((ch>='A') && (ch<='Z'))
    {
       printf("it is capital character\n");
    }
    else
    {
        printf("it is not capital character\n");
    }

}

int main()
{
    char cValue;
    bool bRet='\0';

    printf("enter one character\n");
    scanf("%c",&cValue);

   CheckCapital(cValue);
    

  
    return 0;

}