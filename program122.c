#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iSize)
{
    int i=0;
    int iSum=0;
     for(i=0;i<=iSize;i++)
    {
        iSum=iSum+Arr[i];
      
    }
    return iSum;

}

int main()
{
   int iCount=0,i=0,iRet=0;
   int *Brr=NULL;

    //step1: accept number of elements from user
   printf("Enter the number of elements that you want\n");
   scanf("%d",&iCount);
   
   Brr=(int *)malloc(iCount*sizeof(int)); //ithe taat vadhun ghetlay malloc use karun memory allocate keli ahe

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

    iRet=Addition(Brr,iCount); //Adddition(100,4)
    printf("Addition is %d\n",iRet);
    
    //step 5: after using that memory free it explicitly
   free(Brr); //free use karun memory free keli ahe ani yani heap purna clear houn jato
    return 0;
}


/*
step1: accept number of elements from user
step2: allocate dynamic memory for that number of elements
step3: accept the values  from user and store into that memory

*/