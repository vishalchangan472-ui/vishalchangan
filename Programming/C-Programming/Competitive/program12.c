#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt ==0 && iCnt % 2 == 0 )
        {
            printf("%d", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);
    return 0;

}

// input 24
//output 1 2 4 6 8 12