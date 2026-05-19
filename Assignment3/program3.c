#include <stdio.h>

void calculateFactor(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt ==0 && iCnt % 2 ==0)
        {
            printf("%d \t", iCnt);
        }
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter the number : \n");
    scanf("%d", &ivalue);

    calculateFactor(ivalue);

    return 0;
}