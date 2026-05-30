#include<stdio.h>

int DollerToINR(int iNo)
{
    int iINRToDoller = 70;
    int iConversion = 1;

    iConversion = iNo * iINRToDoller;

    return iConversion;


}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD : \n");
    scanf("%d", &iValue);

    iRet = DollerToINR(iValue);

    printf("Conversion of Doller %d to Rupee is : %d", iValue, iRet);

    return 0;
}