#include<stdio.h>
#include<stdlib.h>

int Frequncy(int Arr[], int iNo)
{
    int iCnt = 0, iDiff = 0, iCountEven = 0, iCountOdd = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }

        iDiff = iCountEven - iCountOdd;
    }

    return iDiff;
}
int main()
{
    int iCnt = 0, iSize = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    Brr = (int *) malloc(iSize * sizeof(int));
   

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the element : %d ->", iCnt+1);
        scanf("%d",& Brr[iCnt]);
    }

    iRet =  Frequncy(Brr, iSize);

    printf("Difference is : %d", iRet);

    return 0;
}