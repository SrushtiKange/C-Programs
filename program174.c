#include<stdio.h>
#include<stdbool.h>

bool ChkOccurance(char *str)
{
    while(*str!='\0')
    {
        if((*str=='w'))
        {
           return true;
           break;
        }
        else
        {
            return false;
        }
        str++;
    }
}

int main()
{
    char Arr[100];
    bool bRet=false;

    printf("Enter string\n");
    scanf("%[^'\n]s",Arr);

    bRet=ChkOccurance(Arr);
    if(bRet==true)
    {
        printf("w is present\n");
    }
    else
    {
        printf("w is not present\n");
    }

    return 0;


}