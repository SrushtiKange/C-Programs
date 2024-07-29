//problem statement - accept two numbers from user and perform its additon 

#include<stdio.h>

int main()
{
    int i,j,k;

    printf("Enter first number\n");
    scanf("%d",&i);

    printf("Enter second number\n");
    scanf("%d",&j);

    k=i+j;
    printf("Addition is %d\n",k);
    return 0;
}

//gcc program2.c -o Myexe to compile
//Myexe.exe to run