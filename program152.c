#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{//he nahi vapraych
    if((ch>=65) && (ch<=90))
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