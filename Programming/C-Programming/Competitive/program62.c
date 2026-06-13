#include<stdio.h>
#include<stdlib.h>

void Display(int brr[],int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if(brr[iCnt] % 5 ==0)
        {
            printf(" %d is divisible by 5 \n", brr[iCnt]);
        }
        else
        {
             printf(" %d is not divisible by 5 \n", brr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0;
    int *arr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    arr = (int *) malloc(iSize * sizeof(int));

    printf("Elements are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &arr[iCnt]);
    }

    Display(arr, iSize);
    return 0;
}