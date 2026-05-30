#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = - iNo;
    }
    
    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        iFact = iCnt * iFact;
    }
    return iFact;
}
int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is : %d", iValue, iRet);

    return 0;
}

//input : 4
//ouput 24 (4*3*2*1)