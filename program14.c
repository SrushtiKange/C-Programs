#include<stdio.h>
#include<stdbool.h>

bool DisplayResult(float fMarks)
{
    if ((fMarks<0.0f) || (fMarks>100.0f))       //filter
    {
        printf("invalid input\n");
        return false;
    }

    if((fMarks>=0.0f) && (fMarks<35.0f))
    {
        return false;
    }
    else 
    {
        return true;
    }
  

}

int main()
{
    float fValue=0.0;
    bool bRet=false;

    printf("Enter the percentage\n");
    scanf("%f",&fValue);

    bRet=DisplayResult(fValue);
    if(bRet==true)
    {
        printf("Student is passed in exam\n");
    }
    else
    {
        printf("student is failed\n");
    }
    return 0;
}