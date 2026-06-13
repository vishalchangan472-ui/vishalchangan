#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range : \n");
    }

    printf("Numbers from %d to %d are : \n", iStart, iEnd);

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d \n", iCnt);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting number : \n");
    scanf("%d", & iValue1);

    printf("Enter ending number : \n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

}