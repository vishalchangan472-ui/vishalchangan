#include<stdio.h>

void Display(int iNo)
{
    //Filter
    if(iNo < 0)
    {
        printf("Invalid input");
        return ;                    // only return bcoz function returns void
    }
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" %d : Jay Ganesh...\n", iCnt);
    }
}

int main()
{
    
    int iValue = 0;

    printf("Enter the frequncy : ");
    scanf("%d", &iValue);

    Display(iValue);
    
    return 0;
}
