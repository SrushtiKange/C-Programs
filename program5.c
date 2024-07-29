/*
step1: understand problem statement
step2: write algorithm
step3: write programming language
step4: write program
step5: test program
*/


//problem statement - accept two numbers from user and perform its additon 
//
//step1: problem statement - accept two numbers from user and perform its additon
//step2:algorithm
//start
//1.1 accept first number from user as iValue1

//next write program
 
#include<stdio.h>

float Addition(float fNo1,float fNo2)
{
    float fAns=0.0;
    fAns=fNo1+fNo2;
    return fAns;
}

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


//step 5 : test program
/*test cases
input1=10.0 input2=20.0  output=30.0
input1=10.0 input2=0.0  output=10.0
input1=0.0 input2=10.0  output=10.0
input1=0.0 input2=0.0  output=0.0
input1=10.0 input2=-7.0  output=3.0
input1=7.0 input2=-10.0  output=-3.0
input1=-7.0 input2=-10.0  output=-17.0

*/