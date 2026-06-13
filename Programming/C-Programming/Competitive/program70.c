#include<stdio.h>
#include<stdlib.h>

int Frequncy(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;

    int *p = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    
    printf("Enter the number  : \n");
    scanf("%d", & iValue);


    p =(int *) malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }


    iRet = Frequncy(p, iSize, iValue);

    printf("Count is : %d", iRet);

    return 0;
}