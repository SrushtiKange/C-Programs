#include<stdio.h>
#include<stdbool.h>

bool ChkOccurance(char *str,char ch)
{
    while(*str!='\0')
    {
        if((*str==ch))
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
    char cValue;

    printf("Enter string\n");
    scanf("%[^'\n]s",Arr);

    printf("Enter character to search\n");
    scanf("%c",&cValue);

    bRet=ChkOccurance(Arr,cValue);
    if(bRet==true)
    {
        printf("Given char is present\n");
    }
    else
    {
        printf("Given char is not present\n");
    }

    return 0;


}