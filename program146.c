#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int i=0;
    printf("Elements in reverse order\n");
    for(i=iSize-1;i>=0;i--)
    {
       printf("%d\n",Arr[i]);
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

   Display(Brr,iCount);//step 4
    
    free(Brr);//5
    return 0;
}