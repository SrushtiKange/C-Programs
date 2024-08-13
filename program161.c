#include<stdio.h>
#include<stdbool.h>

void Display(char *str)
{
    printf("%c\n",*str); 
    str++;
    printf("%c\n",*str);
    str++;
    printf("%c\n",*str);  
    str++;

}

int main()
{
    char Arr[50];

    printf("enter your name\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr); //Display(100)

   
    return 0;

}