#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL PrintEven(int iNo)
{
    if(iNo < 0)
    {
        return FALSE;
    }

    int iCnt1 = 0;

    int iNumber = 2;

    for(iCnt1 = 1; iCnt1 <= iNo; iCnt1++)
    {
        printf("%d \t", iNumber);
        iNumber = iNumber + 2;
    }
}

int main()
{
    int iValue = 0;
    BOOL iRet = FALSE;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = PrintEven(iValue);

    if(iRet == FALSE)
    {
        printf("Please enter positive number \n");
    }
    else
    {
        printf("\nAll good!");
    }
    return 0;
}

