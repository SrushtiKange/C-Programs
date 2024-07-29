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
    if(iRet==RET_INVALID)
    {
        printf("Input is invalid\n");
    }
    else if(iRet==RET_FAIL)
    {
        printf("Student is failed\n");
    }
    else if(iRet==RET_PASS)
    {
        printf("Passed with pass class\n");

    } else if(iRet==RET_SECOND)
    {
        printf("Passed with seconf class\n");

    }
     else if(iRet==RET_FIRST)
    {
        printf("Passed with first class\n");

    }
     else if(iRet==RET_DIST)
    {
        printf("Passed with distinction\n");

    }
    return 0;
}