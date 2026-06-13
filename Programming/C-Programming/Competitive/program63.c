#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iNo)
{
    int iCnt = 0, iEven = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0 && Arr[iCnt] % 5 == 0)
        {
           printf("%d of even numbers divisible by 5: %d\n", Arr[iCnt]);
        }
    }
    
}
int main()
{
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    ptr =(int *) malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr, iSize);


    return 0;
}