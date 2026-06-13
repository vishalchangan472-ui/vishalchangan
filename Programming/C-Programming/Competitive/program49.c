#include<stdio.h>

double FhToCel(float fNo)
{
    double dConversion = 0.0;

    dConversion = (fNo - 32) * 5/9;

    return dConversion;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temprature in fahrenheit : \n");
    scanf("%f", &fValue);

    dRet = FhToCel(fValue);

    printf("The conversion of %f fahrenheit to celcius is: %lf \n", fValue, dRet);
}