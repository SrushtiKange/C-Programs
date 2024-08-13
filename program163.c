#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[50];
    int iRet=0;

    printf("enter your name\n");
    scanf("%[^'\n']s",Arr);

    iRet=strlen(Arr);
    printf("length of string is %d\n",iRet);

   
    return 0;

}