#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if((Arr[iCnt] % 3 == 0) && (Arr[iCnt] % 5 == 0))
        {
            printf("%d  is divisible by 3 and 5 \n", Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0;
    int *Brr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    printf("Enter the elements : \n");

    Brr = (int *) malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    Display(Brr, iSize);

    return 0;
}