/*
Write a program which accept number from user and return its factorial.

Input : 5
Output : 120

*/

#include<stdio.h>

int Factorial(int iNo)
{
    static int iMult = 1;
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        iMult = iMult * iCnt;
        iCnt++;
        Factorial(iNo);
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n", iRet);

    return 0;
}