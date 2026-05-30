#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int itable = 10;
    int iAns = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = itable ; iCnt >= 1; iCnt--)
    {
        iAns = iCnt * iNo;

        printf("%d \t", iAns);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Table(iValue);
    return 0;
}