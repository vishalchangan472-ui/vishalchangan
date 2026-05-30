#include<stdio.h>

void Display(int iNo)
{
    char *Arr[] = {"Zero", "One", "Two", "Three", "Four",
                   "Five", "Six", "Seven", "Eight", "Nine"};
    
    if(iNo > 9)
    {
        printf("Invalid digit");
    }               

    if(iNo >= 0 && iNo <=9)
    {
        printf("%s", Arr[iNo]);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);
    
    Display(iValue);
    return 0;
}