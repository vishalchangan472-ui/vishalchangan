#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL checkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL iRet = FALSE;


    printf("Enter number to check odd or even : \n");
    scanf("%d", &iValue);
    iRet = checkEven(iValue);

    if(iRet == TRUE)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
    return 0;
}