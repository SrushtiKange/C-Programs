#include<stdio.h>

void strlwr(char *str)
{
    while(*str!='\0')
    {
        (*str)=(*str)+32;
        str++;
    }


}

int main()
{
    char Arr[30];

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    strlwr(Arr);

    printf("Entered string is :%s\n",Arr);

    return 0;
}