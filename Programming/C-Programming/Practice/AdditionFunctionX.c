#include <stdio.h>

int Addition(int no1, int no2)
{
    int ans = 0;
    ans = no1+no2;
     return ans;
}

int main()
{
    int Ret = 0, a=11, b=10;

    Ret = Addition(11,10);

    printf("Addition is : %d", Ret);
    
    return 0;
}