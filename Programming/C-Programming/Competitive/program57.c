#include<stdio.h>

#define true 1
#define false 0
typedef int boolean;

boolean CheckZero(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    for(iCnt =1; iCnt <=iNo; iCnt++)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return true;
        }
        iNo = iNo / 10;
    }

    return false;
}
int main()
{
    int iValue = 0;
    boolean bRet = false;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("There is zero in the number\n");
    }
    else
    {
        printf("There is no zero in the number\n");
    }

    return 0;
}