#include<stdio.h>

int main()
{
    int iNo=438;
    int iDigit=0;

    iDigit=iNo%10;
    printf("%d",iDigit);    //8

    iNo=iNo/10;             //43
    iDigit=iNo%10;
    printf("%d",iDigit);    //3

    iNo=iNo/10;             
    iDigit=iNo%10;
    printf("%d",iDigit);   

    iNo=iNo/10;

    return 0;
}

/*

actual no=674598

iNo         iDigit=iNo%10       iNo=iNo/10  
674598      8                   67459
67459       9                   6745
6745        5                   674
674         4                   67
67          7                   6
6           6                   0
0


*/