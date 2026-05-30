#include <stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt =1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0 )
        {
            iFact = iCnt * iFact; 
            
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);
    printf("Multiplication of factor is : %d ", iRet);
    return 0;
}

// input : 12
// output : 144 (1*2*3*4*6)