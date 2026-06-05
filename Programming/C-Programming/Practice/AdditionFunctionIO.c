#include <stdio.h>

int Addition(int no1, int no2)
{
    int ans = 0;
    ans = no1+no2;
     return ans;
}

int main()
{
    int Ret = 0, a=0, b=0;

    printf("Enter First Number : \n");
    scanf("%d", &a);

    printf("Enter Second Number \n");
    scanf("%d", &b);

    Ret = Addition(11,10);

    printf("Addition is : %d", Ret);
    
    return 0;
}