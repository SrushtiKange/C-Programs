//-5 -4 -3 -2 -1 0 1 2 3 4 5
//time complexity here is 2N as the loop don wela firto eg- input 5 dila tar loop 10 vela firtoy 
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
     {
      printf("%d\t",iCnt);
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