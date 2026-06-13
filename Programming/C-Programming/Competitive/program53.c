#include<stdio.h>

int RangeDisplayOdd(int iStart, int iEnd)
{
    int iCnt= 0;
    int iSum = 0;
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}
int main()
{
    int iValue1 =0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting number : \n");
    scanf("%d", &iValue1);

    printf("Enter Last number : \n");
    scanf("%d", &iValue2);

    if(iValue1 > iValue2)
    {
        printf("Invalid range \n");
        return 0;
    }

    if(iValue1 < 0 || iValue2 < 0)
    {
        printf("Number should be positive \n");
        return 0;
    }


    iRet = RangeDisplayOdd(iValue1, iValue2);

    printf("Addition of numbers from %d to %d is : %d \n", iValue1, iValue2, iRet);

    return 0;
}