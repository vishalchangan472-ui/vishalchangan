#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iCnt = 0, iSize = 0, iRet =0;
    int *Brr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    Brr = (int *) malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    iRet = CountEven(Brr, iSize);

    printf("Frequncy of even numbers are : %d", iRet);

    return 0;
}