#include <stdio.h>

int Addition(int no1, int no2)
{

    int ans = 0;
    ans = no1 + no2;

    return ans;
}

int main()
{
    int Res = 0;    

    Res = Addition(11,10);

    printf("Addition is : %d", Res);
    
    return 0;
}