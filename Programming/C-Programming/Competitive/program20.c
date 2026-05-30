#include <stdio.h>

int FactDifference(int iNo)
{
    int iCnt = 0;
    int iAddFact1 = 0;
    int iAddFact2 = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iAddFact1 = iCnt + iAddFact1;
        }
        else if(!(iNo % iCnt == 0))
        {
            iAddFact2 = iCnt + iAddFact2;
        }
    }
    return iAddFact1 - iAddFact2;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = FactDifference(iValue);
    printf("%d", iRet);

    return 0;
}