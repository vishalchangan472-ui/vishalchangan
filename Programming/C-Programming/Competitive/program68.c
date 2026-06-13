#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int boolean;


boolean Check(int Arr[], int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
          return TRUE;
        }
        else
        {
            return FALSE;
        }
    
    }
   
}
int main()
{
    int iCnt = 0, iSize = 0;
    boolean bRet = FALSE;
    int *Brr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    Brr = (int *) malloc(iSize * sizeof(int));
   

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the element : %d ->", iCnt+1);
        scanf("%d",& Brr[iCnt]);
    }

    bRet =  Check(Brr, iSize);

    if(bRet == TRUE)
        {
          
           printf("Number is present \n");
        }
        else
        {
             printf("Number is not present \n");
        }

   

    return 0;
}