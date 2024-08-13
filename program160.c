#include<stdio.h>
#include<stdbool.h>

int main()
{
    char Arr[50];

    printf("enter your name\n");
    scanf("%[^'\n']s",Arr);//ithe & nahi vaprat karan string ahe
//input ithe enter jo paryant yet nahi to paryant gheto yala regular expression asa mhantat
    printf("your name is %s\n",Arr);

   
    return 0;

}