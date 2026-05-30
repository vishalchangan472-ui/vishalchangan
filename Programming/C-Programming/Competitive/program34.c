#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iOddFactorial = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(!(iCnt % 2 == 0))
        {
            printf("%d \t", iCnt); 
            iOddFactorial = iCnt * iOddFactorial;
        }
    }

    return iOddFactorial;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("\nOdd factorial of number is : %d", iRet);
    return 0;
}