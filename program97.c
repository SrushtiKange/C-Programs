//**** row=3 col=4
//1111
//2222
//3333

#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i=0;
    int j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");

    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter number of rows");
    scanf("%d",&iValue1);

    printf("Enter number of columns");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;

}