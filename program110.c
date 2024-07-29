 /*
 1
 12
 123
 1234
 */

#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i=0;
    int j=0;
    if(iRow!=iCol)  //Filter
    {
       printf("Enter same number of rows and columns");
        return;
    }

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
            {
                if(i==1 || j==1 || (i==iRow) || (j==iCol))          //lower triangle
                {
                    printf("*\t");
                }
                else
                {
                    printf("#\t");

                }
              
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