/*
Write a recursive program which  accept string from the user and return its reverse number.

Input : 253
Output : 352
*/

#include<stdio.h>

int ReverseNumber(int iNo)
{
    static int iRev = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iRev = ((iRev * 10)+(iNo % 10));
        iNo = iNo / 10;

        ReverseNumber(iNo);
    }
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = ReverseNumber(iValue);

    printf("Reverse number is : %d\n", iRet);

    return 0;
}