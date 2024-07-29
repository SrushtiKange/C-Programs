//age limit code

/*
0-4 no money
4-10 900
10-50 2000
50 and more 500
*/
//////////////////////////////////////////////////////
//Function Name:    CheckTicket
//Description:      Display ticket price based on age
//Input:            Integer
//Output:           Integer
//Author:           Srushti
//Date:             29/04/2024
/////////////////////////////////////////////////////
#include<stdio.h>

int CheckTicket(int iNo)
{
    if((iNo>=0) && (iNo<=4))
    {
        return 0;
    }
    else if((iNo>4) && (iNo<=10))
    {
        return 900;
    }
    else if((iNo>10) && (iNo<=50))
    {
        return 2000;
    }
    else if(iNo>50)
    {
        return 500;
    }

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter your age:");
    scanf("%d",&iValue);

    iRet=CheckTicket(iValue);

    printf("Your ticket price is: %d",iRet);
    return 0;
}