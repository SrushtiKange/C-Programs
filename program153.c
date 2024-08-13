#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{//he vapraych
    if((ch>='a') && (ch<='z'))
    {
       printf("it is small character\n");
    }
    else
    {
        printf("it is not small character\n");
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