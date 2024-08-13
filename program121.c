#include<stdio.h>
#include<stdlib.h>


int main()
{
   int iCount=0,i=0,iRet=0;
   int *Brr=NULL;

    //step1: accept number of elements from user
   printf("Enter the number of elements that you want\n");
   scanf("%d",&iCount);
   
   //step2: allocate dynamic memory for that number of elements
   Brr=(int *)malloc(iCount*sizeof(int)); //ithe taat vadhun ghetlay malloc use karun memory allocate keli ahe

    //step3: accept the values  from user and store into that memory
   printf("Enter the elements\n");
   for(i=0;i<iCount;i++)
   {
    scanf("%d",&Brr[i]);
   } 
   
   //
   printf("Elements are\n");
   for(i=0;i<iCount;i++)
   {
    printf("%d\n",Brr[i]);
   }
   //step4: pass the address of that memory in the function (any function that you want to use that memory)


    //step 5: after using that memory free it explicitly
   free(Brr); //free use karun memory free keli ahe
    return 0;
}


/*
step1: accept number of elements from user
step2: allocate dynamic memory for that number of elements
step3: accept the values  from user and store into that memory

*/