#include<stdio.h>

int KMToMeter(int iNo)
{
    int iOneKMTOMeter = 1000;
    int iConversion = 0;

    iConversion = iNo * iOneKMTOMeter;

    return iConversion;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : \n");
    scanf("%d", &iValue);

    iRet = KMToMeter(iValue);

    printf("Distance of %d KM is %d Meter", iValue, iRet);

    return 0;
}