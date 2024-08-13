#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iSize)
{
    //logic

}

int main()
{
   int iCount=0,i=0,iRet=0;
   int *Brr=NULL;

   
   printf("Enter the number of elements that you want\n");
   scanf("%d",&iCount);
   
   Brr=(int *)malloc(iCount*sizeof(int)); 

   printf("Enter the elements\n");
   for(i=0;i<iCount;i++)
   {
    scanf("%d",&Brr[i]);
   } 
   
   printf("Elements are\n");
   for(i=0;i<iCount;i++)
   {
    printf("%d\n",Brr[i]);
   }

    iRet=Addition(Brr,iCount); 
    printf("Addition is %d\n",iRet);
    
   
   free(Brr);

   return 0;
}

