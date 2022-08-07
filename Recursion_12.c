/*
Write a program which accept number from user and return summation of its digits.

Input : 879
Output : 24

*/

#include<stdio.h>

int Sumdigits(int iNo)
{
    static int iSum = 0;

    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
        Sumdigits(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = Sumdigits(iValue);

    printf("Summation is : %d", iRet);

    return 0;
}