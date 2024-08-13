#include<stdio.h>
#include<stdbool.h>

void UpdateString(char str[])
{
    int iCnt=0;
    
   for(iCnt=0;str[iCnt]!='\0';iCnt++)
    {
      printf("%c\n",str[iCnt]);
    }
   
}

int main()
{
    char Arr[100];

    printf("Enter string\n");
    scanf("%[^'\n]s",Arr);

    UpdateString(Arr);

    return 0;


}