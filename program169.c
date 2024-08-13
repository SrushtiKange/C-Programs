#include<stdio.h>
#include<stdbool.h>

int CountVowel(char *str) //case sensitive
{
    int iCnt=0;
    while(*str!='\0')
    {
        if((*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u'))
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

    iRet=CountVowel(Arr);

    printf("Count of vowels is %d\n",iRet);

    return 0;


}