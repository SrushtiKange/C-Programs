#include<stdio.h>
#include<stdbool.h>
//Time complexity: O(N/2)-order of N by 2
//jitha llop ahe titha time complexity--vel
//jitha dynamic memory allocation -space complexity--jaga
void DisplayFactors(int iNo)
{
     int iCnt=0;
     printf("Factors of %d are:\n",iNo);
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
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