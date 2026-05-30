#include<stdio.h>

int CountEven(int iNo)  
{
    int iResult = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0) 
    {
        iResult = iNo % 10; 

        if(iResult % 2 == 0)  
        {
            iCnt++;             
        }

        iNo = iNo / 10; 
    }
    
    return iCnt;


}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf("Count of even number is : %d \n", iRet);

    return 0;
}

//time complexity is O(N) where N is the number of digits in the number.