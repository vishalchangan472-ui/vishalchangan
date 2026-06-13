#include <stdio.h>

double SquareToMeter(int iNo)
{
    double dOneSqrFeet = 0.0929;
    double dConversion = 0.0;

    dConversion = iNo * dOneSqrFeet;
    return dConversion;
}
int main()
{
    int iValue = 0;
    double iRet = 0.0;


    printf("Enter area in square feet : \n");
    scanf("%d", &iValue);

    iRet = SquareToMeter(iValue);
    printf("The conversion of %d square feet to meter is: %lf \n", iValue, iRet);
    return 0;
}