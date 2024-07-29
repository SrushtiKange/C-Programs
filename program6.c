#include<stdio.h>

////////////////////////////////////////////////////////////////
//Function Name:  Addition
//Description :    It is used to perform addition of two numbers
//Input:          float,float
//Output:         float
//Author:         Srushti Kange
//Date:           15/04/2024
////////////////////////////////////////////////////////////////


//float he return valure ahee
float Addition(float fNo1,float fNo2)
{
    float fAns=0.0;
    fAns=fNo1+fNo2;
    return fAns;
}
/////////////////////////////////////////////////////////////////
//Function Name: main
//Description :    It is entry point function
/////////////////////////////////////////////////////////////////
int main()
{
   float fValue1=0.0, fValue2=0.0;
   float fResult=0.0;

    printf("Enter first number\n");
    scanf("%f",&fValue1);

    printf("Enter second number\n");
    scanf("%f",&fValue2);

    fResult=Addition(fValue1,fValue2);

    printf("Addition is %f\n",fResult);
    return 0;
}
