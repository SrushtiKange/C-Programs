//A B C D E
//time complexity here is 2N as the loop don wela firto eg- input 5 dila tar loop 10 vela firtoy 
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    char ch='A';
    for(iCnt=1;iCnt<=iNo;iCnt++)
     {
      printf("%c\t",ch);
      ch++;
     }
    printf("\n");
}

int main()
{
    int iValue=0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}