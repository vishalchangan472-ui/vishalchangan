#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iNo)
{
    int iCnt = 0;

    for(iCnt =0; iCnt < iNo; iCnt++)
    {
        if(Arr[iCnt] % 11 == 0)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}
int main()
{
    int *Brr = NULL;
    int iSize =0, iCnt = 0;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    Brr =(int *) malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    Display(Brr, iSize);

    return 0;
}