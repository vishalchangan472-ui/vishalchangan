#include<stdio.h>

double FhToCs(float fTemp)
{
    double celcius = 0.0;
    celcius = ((fTemp - 32) * (5.0 / 9.0));
    double fConversion = 0.0;

    return celcius;

}
int main()
{
    float fValue =0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : \n");
    scanf("%f", &fValue);

    dRet = FhToCs(fValue);

    printf("Conversion of Fahrenheit to celcius is : %lf", dRet);
    return 0;
}