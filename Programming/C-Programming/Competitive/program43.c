#include<stdio.h>

int CountRange(int iNo)     
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo > 0)     
    {
        iDigit = iNo % 10;      
        
        if((iDigit >3) && (iDigit < 7))   
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

    printf("ENter number : \n");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("Count of digit between 3 & 7 : %d", iRet);

    return 0;
}