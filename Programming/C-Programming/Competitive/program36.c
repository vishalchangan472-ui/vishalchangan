#include <stdio.h>

double CircleArea(float fRadius)
{
    double PI = 3.14;
    double circlRadius = 0.0;

    circlRadius = fRadius * fRadius * PI; 

    return circlRadius;

}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the radius of a circle : \n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Radius of a circle is : %lf", dRet);

    return 0;
}