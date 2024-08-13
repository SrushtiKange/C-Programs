#include<stdio.h>
#include<stdbool.h>

int ChkOccurance(char *str,char ch)
{
    int iCnt=1;
    bool bFlag=false;
    while(*str!='\0')
    {
        if((*str==ch))
        {
           bFlag=true;
           break;
        }
        iCnt++;
        str++;
    }
    if(bFlag==true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char Arr[100];
    int iRet=0;
    char cValue;

    printf("Enter string\n");
    scanf("%[^'\n]s",Arr);

    printf("Enter character to search\n");
    scanf(" %c",&cValue);

    iRet=ChkOccurance(Arr,cValue);
    if(iRet==-1)
    {
        
        printf("There is no such letter\n");
    }
    else
    {
       printf("Letter occurrs at pos %d\n",iRet);
    }

    return 0;


}