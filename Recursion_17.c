/*
Write a recursive program which  accept string from the user and return largest digit.

Input : 87983
Output : 9
*/

#include<stdio.h>

int LagestDigit(int iNo)
{
    static int iMax = 0;

    if(iNo != 0)
    {
        if(iMax < (iNo % 10))
        {
            iMax = (iNo % 10);
        }
        iNo = iNo / 10;

        LagestDigit(iNo);
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = LagestDigit(iValue);

    printf("Largest digit is : %d\n", iRet);

    return 0;
}