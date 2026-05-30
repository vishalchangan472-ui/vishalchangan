#include<stdio.h>

int FactorialDifference(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iDifference = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iCnt * iEvenFact;
        }
        else
        {
            iOddFact = iCnt * iOddFact;
        }
        iDifference = iEvenFact - iOddFact;
    }

    return iDifference;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = FactorialDifference(iValue);

    printf("Difference between even and odd factorial is : %d", iRet);

    return 0;
}