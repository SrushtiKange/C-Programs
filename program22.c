#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    
    for (iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Jay Hamuman\n");
    }
   
}
int main()
{
   int iValue=0;
   
   printf("Enter the number to decide how many times you want to display the message\n ");
   scanf("%d",&iValue);

   Display(iValue);
   return 0;
}