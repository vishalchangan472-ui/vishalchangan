#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iNo)
{
    int iSumDiff = 0, iCnt = 0;
    int iSumEven = 0, iSumOdd = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven = Arr[iCnt] + iSumEven; 
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }

        iSumDiff = iSumEven - iSumOdd;
    }

    return iSumDiff;

}
int main()
{
    
    int iRet = 0, iCnt = 0, iSize =0;
    int *p = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    p =(int *) malloc(iSize * sizeof(int));

   printf("Enter the numbers : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Differece of summession of even and odd elements are : %d", iRet);

    

    return 0;
}