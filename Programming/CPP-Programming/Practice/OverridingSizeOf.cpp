#include <iostream>
using namespace std;

class Base
{
    public :
        int i, j;               //8 byte

        void fun()
        { cout<<"Inside Base fun\n"; }

        void gun()
        { cout<<"Inside Base gun\n"; }

        void sun()
        { cout<<"Inside Base sun\n"; }
};      

class Derived : public Base     //16 bytes

{
    public:
    int x, y;

    void fun()                               // redefination of fun bcoz parent also has fun method
    { cout<<"Inside Derived fun\n"; }

    void sun()
        { cout<<"Inside Derived sun\n"; }

    void run()
        { cout<<"inside Derived run\n"; }        // only defination    
};      
int main()
{
   cout<<sizeof(Base)<<"\n";    //8 byte
   cout<<sizeof(Derived)<<"\n"; // 16 byte


    return 0;
}