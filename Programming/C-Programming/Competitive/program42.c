#include<stdio.h>

int CountOdd(int iNo)
{
    int iResult = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {

        iResult = iNo % 10;

        if(iResult % 2 != 0)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
    }



int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    printf("Count of odd number is : %d \n", iRet);

    return 0;
}