//input:5
//output 1*12*23*3

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
     {
        printf("%d\t",iCnt);
         printf("*\t");
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