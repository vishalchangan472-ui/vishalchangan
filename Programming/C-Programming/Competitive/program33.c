#include<stdio.h>

int EvenFacorial(int iNo)
{
    int iCnt = 0;
    int iFactor = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
            {
              printf("%d \t", iCnt);  
              iFactor = iFactor * iCnt;
            }
    }
    return iFactor;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = EvenFacorial(iValue);

    printf("\nSum of Even factorial are : %d", iRet);

    return 0 ;
}