#include<stdio.h>
#include<stdlib.h>

int Frequncy(int Arr[], int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }

    return iCount;
}
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;

    int *p = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    p =(int *) malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequncy(p, iSize);

    printf("Count is : %d", iRet);

    return 0;
}