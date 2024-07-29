#include<stdio.h>
#include<stdbool.h>

//problem statement: Write a program which accept one number from user and check if the number is divisible by 3 and 5.
//Algorithm
/*
START
    Accept one number as No
    Divide that number by 3 
    If the remainder is 0
    then divide the number by 5
    If the remainder is 0
    then display the result as number is divisible by 3 and 5
    otherwise display the result as number is not divisible by 3 and 5
STOP
*/

///////////////////////////////////////////////////////////
//Function Name:        CheckDivisible
//Description:          Used to check whether the number is divisible by 3 and 5
//Input:                Integer
//Output:               Boolean
//Author:               Srushti Kange
//Date:                 16/04/2024
//////////////////////////////////////////////////////////

bool CheckDivisible(unsigned int iNo)
{
    if(((iNo%3)==0) && ((iNo%5)==0))
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

    bRet=CheckDivisible(iValue);

    if(bRet==true)
    {
        printf("%d is divisible by 3 and 5\n",iValue);
    
    }
    else
    {
        printf("%d is not divisible by either 3 or 5\n",iValue);

    }
    
    return 0;
}

/*
Logical && operator
First     Second      &&          ||
True      True        True        True
True      False       False       True
False     True        False       True
False     False       False       False
*/