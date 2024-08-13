#include<stdio.h>
#include<stdlib.h>
//time complexity is O(N/2) eg=10 elements then 5 iterations
void Reverse(int Arr[],int iSize)
{
    int iStart=0,iEnd=0,temp=0;

    iStart=0;
    iEnd=iSize-1;

    while(iStart<iEnd)
    {
       temp=Arr[iStart];
       Arr[iStart]=Arr[iEnd];
       Arr[iEnd]=temp;

       iStart++;
       iEnd--;
    }
    

}

int main()
{
    int *Brr=NULL;
    int iCount=0,i=0;

    printf("Enter number of elements you want\n");//step 1
    scanf("%d",&iCount);

    Brr=(int *)malloc(iCount*sizeof(int));//step 2
    
    printf("Enter the elements\n");//step 3
    for(i=0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }

   Reverse(Brr,iCount);//step 4

   printf("Elements after reversing\n");
    for(i=0;i<iCount;i++)
    {
        printf("%d\n",Brr[i]);
    }
    
    free(Brr);//5
    return 0;
}