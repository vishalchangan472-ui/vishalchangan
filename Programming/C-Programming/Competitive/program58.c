#include<stdio.h>

int CountTwo(int iNo)     
{
    int iCnt = 0;
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet =  CountTwo(iValue);
    printf("Number of 2's in the number is : %d\n",iRet);
    return 0;
}