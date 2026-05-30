#include<stdio.h>

double RectArea(float fNo1, float fNo2)
{
    double dArea = 0.0;

    dArea = fNo1 * fNo2;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width : \n");
    scanf("%f", &fValue1);

    printf("Enter height : \n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area od a rectangle is : %lf", dRet);


    return 0;
}