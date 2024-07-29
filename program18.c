/*
0-35    fail
35-50   pass class
50-60   second class
60-75   first class
75-100  First class with distinction
(35,50,60,75 is exclusive)
*/
/*here we have used if else if ladder*/
#include<stdio.h>

//user defined macro
#define RET_INVALID -1

#define RET_FAIL 1
#define RET_PASS 2
#define RET_SECOND 3
#define RET_FIRST 4
#define RET_DIST 5
int DisplayResult(float fMarks)
{
    if ((fMarks<0.0f) || (fMarks>100.0f))       //filter (input validation)
    {
        return RET_INVALID;
      
    }

    if((fMarks>=0.0f) && (fMarks<35.0f))
    {
        return RET_FAIL;
    }
    else if((fMarks>=35.0f) && (fMarks<50.0f))
    {
        return RET_PASS;
    }
     else if((fMarks>=50.0f) && (fMarks<60.0f))
    {
        return RET_SECOND;
    }
     else if((fMarks>=60.0f) && (fMarks<75.0f))
    {
        return RET_FIRST;
    }
     else if((fMarks>=75.0f) && (fMarks<=100.0f))
    {
        return RET_DIST;
    }
   
  

}

int main()
{
    float fValue=0.0;
    int iRet=0;

    printf("Enter the percentage\n");
    scanf("%f",&fValue);

    iRet=DisplayResult(fValue);
    switch(iRet)
    {
        case RET_FAIL:
            printf("Student is fail\n");
        break;

        case RET_PASS:
            printf("Student is having pass class");
        break;

        case RET_SECOND:
             printf("Student is having second class");
        break;

        case RET_FIRST:
             printf("Student is having first class");
        break;

        case RET_DIST:
             printf("Student is having distinction class");
        break;

        case RET_INVALID:
             printf("Invalid input");
        break;
    }

    return 0;
}