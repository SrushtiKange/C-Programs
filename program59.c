#include<stdio.h>

void OddDisplay(int iNo)
{
   
    int iDigit=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10; 
        if(iDigit%2!=0)
        {
            printf("%d\n",iDigit); 
        }
        
    }
   
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter thr number");
    scanf("%d",&iValue);

   OddDisplay(iValue);

    return 0;
}