#include <iostream>
using namespace std;

class Base
{
    public :
        int i, j;               //8 byte

        void fun()
        { cout<<"Inside Base fun\n"; }

        virtual void gun()
        { cout<<"Inside Base gun\n"; }

        virtual void sun()
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

    virtual void run()
        { cout<<"inside Derived run\n"; }        // only defination    
};      
int main()
{
   Base *bp = new Derived();    // upcasting

   bp -> fun();     // Base cha fun call honar karan 
   bp -> gun();     // Base cha gun call honar karan Derived  
   bp -> sun();     // Derived cha sun call honar karan flow ha adhi bp kadun base kde janar
   //bp -> run();     //Error karan Base madhe run method nahi


    return 0;
}