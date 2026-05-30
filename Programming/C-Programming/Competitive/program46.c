#include<stdio.h>

double CircleArea(double dRadius)
{
    double PI = 3.14;
    double dCircleArea = 0.0;

    dCircleArea = PI * dRadius * dRadius;

    return dCircleArea;
}
int main()
{
    double dValue = 0.0;
    double dRet = 0.0;

    printf("Enter the value of dValue : \n");
    scanf("%lf", &dValue);
    printf("The value of dValue is : %lf\n", dValue);

    dRet = CircleArea(dValue);
    printf("The area of the circle is : %lf\n", dRet);
    
    return 0;
}