#include<stdio.h>

int KMToMeter(int iNo)
{
    int iConversion = 1000;

    iConversion = iNo * iConversion;

    return iConversion;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value of iValue : \n");
    scanf("%d", &iValue);

    iRet = KMToMeter(iValue);

    printf("The conversion of %d km to meters is : %d\n", iValue, iRet);

    return 0;
}