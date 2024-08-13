#include<stdio.h>
#include<stdlib.h>

int Updater(int Arr[],int iSize)
{
    int i=0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]%2==0)
        {
            Arr[i]++;
        }
     
       
    }

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

    iRet=Updater(Brr,iCount);//step 4
    printf("Data after updation is\n");
    for(i=0;i<iCount;i++)
    {
        printf("%d\n",Brr[i]);
    }


    free(Brr);//5
    return 0;
}