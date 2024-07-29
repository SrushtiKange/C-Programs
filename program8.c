#include<stdio.h>
#include<stdbool.h>

//problem statement: Write a program which accept one number from user and check whether that number is even or odd.

//Algorithm
/*
START
    Accept one number as No
    Divide that number by 2
    If the remainder is 0
    then display the result as Even
    Otherwise display the result as Odd
STOP
*/

///////////////////////////////////////////////////////////
//Function Name:        CheckEvenOdd
//Description:          Used to check whether the number is even or odd
//Input:                Integer
//Output:               Boolean
//Author:               Srushti Kange
//Date:                 16/04/2024
//////////////////////////////////////////////////////////

bool CheckEvenOdd(unsigned int iNo)
{
    if((iNo%2)==0)
    {
        return true;
    
    }
    else
    {
        return false;

    }
}

int main()
{
    unsigned int iValue=0;
    bool bRet=false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);

    if(bRet==true)
    {
        printf("%d id even number\n",iValue);
    
    }
    else
    {
        printf("%d is odd number\n",iValue);

    }
    
    return 0;
}