#include<iostream>
using namespace std;

class Base
{
    public :
        int i, j;       // 8 byte
};      

class Derived : public Base
{
    public:
    int x, y;        // 16 bytes
};     
int main ()
{
    Derived *dp = NULL;
    Base bobj;

    dp = &bobj;     // downcasting karan Derived cha pointer chi capacity 16 byte chi ahe ani to Base chya object la point krto jo 8ch byte cha ahe.. mnje layki jast pan swapn kami not allowed
    return 0;
}