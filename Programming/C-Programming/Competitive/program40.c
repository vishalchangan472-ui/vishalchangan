#include<stdio.h>

double SquareToMeter(int iNo)
{
    double dSquareFeet =0.0;
    dSquareFeet = 0.0929;

    double dConversion = iNo * dSquareFeet;
    
    return dConversion;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%d", &iValue);

    dRet = SquareToMeter(iValue);

    printf("Conversion of square feet to square meter is : %lf", dRet);

    return 0;
}