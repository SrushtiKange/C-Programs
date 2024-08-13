#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
    int i=0,iMin=Arr[0];
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]<iMin)
        {
            iMin=Arr[i];
        }
    }
    return iMin;
}

int main()
{
    int *Brr=NULL;
    int iCount=0,i=0,iRet=0;

    printf("Enter number of elements you want\n");//step 1
    scanf("%d",&iCount);

    Brr=(int *)malloc(iCount*sizeof(int));//step 2
    
    printf("Enter the elements\n");//step 3
    for(i=0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet=Minimum(Brr,iCount);//step 4
    printf("Minimum number is %d\n",iRet);

    free(Brr);//5
    return 0;
}