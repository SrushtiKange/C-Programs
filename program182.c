#include<stdio.h>
#include<stdbool.h>

int ChkFrequency(char *str,char ch)
{
    int iCnt=0;
   
    while(*str!='\0')
    {
        if(*str==ch)
        {
           iCnt++;
          
        }
        str++;
    }
    return iCnt;
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

    iRet=ChkFrequency(Arr,cValue);
    printf("Frequency of character is %d\n",iRet);

    return 0;


}