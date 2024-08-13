#include<stdio.h>
#include<stdbool.h>
//time complexity is O(N) where N is number of elements in string
int CountVowel(char *str) //case insensitive small and capital both are supported
{
    int iCnt=0;
    while(*str!='\0')
    {
        if((*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u') ||
           (*str=='A') || (*str=='E') || (*str=='I') || (*str=='O') || (*str=='U'))
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