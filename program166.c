#include<stdio.h>
#include<stdbool.h>

int strlenCap(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
            iCnt++;
        }
        str++;
    }
   
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter string\n");
    scanf("%[^'\n]s",Arr);

    iRet=strlenCap(Arr);

    printf("Count of capital characters is %d\n",iRet);

    return 0;


}