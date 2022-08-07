/*
Write a program which accept number from user and return product of its digits.

Input : 523
Output : 30

*/

#include<stdio.h>

int Product(int iNo)
{
    static int iMult = 1;

    if(iNo != 0)
    {
        iMult = iMult * (iNo % 10);
        iNo = iNo / 10;
        Product(iNo);
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = Product(iValue);

    printf("Multiplication is : %d", iRet);

    return 0;
}