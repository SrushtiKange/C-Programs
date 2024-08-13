#include<stdio.h>
#include<stdbool.h>

int ChkOccurance(char *str,char ch)
{
    int iCnt=1,iPos=-1;
   
    while(*str!='\0')
    {
        if((*str==ch))
        {
              iPos=iCnt;
            
        }
        iCnt++;
        str++;
    }
   return iPos;
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
    if(iRet!=-1)
    {
        printf("Letter last occurance at pos %d\n",iRet);
    }
    else
    {
        printf("There is no such letter\n");
    }

    return 0;


}