#include<stdio.h>

int MultDigit(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    while(iNo > 0)      //2395
    {
        iDigit = iNo % 10;  //5
        if(iDigit <=0)
        {
            iDigit++;
        }

        iMult = iDigit * iMult;

         iNo = iNo / 10;
    }
       

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet= 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = MultDigit(iValue);

    printf("%d", iRet);

    return 0;
}