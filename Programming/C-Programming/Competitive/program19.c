#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSumNonFact = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(!(iNo % iCnt == 0))
        {
            iSumNonFact = iCnt + iSumNonFact;
        
        }
    }
    return iSumNonFact;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);
    printf("Summession of all non factor of a number %d is: %d",iValue, iRet);
    return 0;
}