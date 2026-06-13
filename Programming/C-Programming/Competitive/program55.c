#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iEnd; iCnt>=iStart; iCnt--)
    {
        printf("%d \n", iCnt);
    }
}
int main()
{
     int iValue1 = 0, iValue2 = 0; 

    printf("Enter first number : \n");
    scanf("%d", &iValue1);

    printf("Enter second number : \n");
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

    RangeDisplayRev(iValue1, iValue2);

    return 0;

}