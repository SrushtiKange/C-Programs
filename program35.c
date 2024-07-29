#include<stdio.h>
#include<stdbool.h>
//Time complexity : O(N)-order of N
void DisplayFactors(int iNo)
{
     int iCnt=0;
     printf("Factors of %d are:\n",iNo);
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
           printf("%d\n",iCnt);
        }
    }
   

}

int main()
{
    int iValue=0;
   
    printf("Enter the number to find its factors");
    scanf("%d",&iValue);
    DisplayFactors(iValue);
   
    return 0;
   
}