#include<stdio.h>

void Display(int iNo, int iFrequncy)
{
    int iCnt = 0;
    
    //Updater
    if(iFrequncy < 0)
    {
        iFrequncy = - iFrequncy;
    }

    for(iCnt = 1; iCnt <= iFrequncy; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    printf("Enter frequncy : \n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}

// input : 11 3
// output : 11 11 11