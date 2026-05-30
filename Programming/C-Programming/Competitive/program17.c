#include<stdio.h>

void FactReverse(int iNo)
{
    int iCnt;

    for(iCnt = iNo - 1; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d \t", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    FactReverse(iValue);
    return 0;
}

// input : 10
// output 1 2 5