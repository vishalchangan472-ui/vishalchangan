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
    Base *bp = NULL;
    

    bp = new Derived();     //upcasting bcoz base class pointer points to derived 

    bp -> fun();        //Base cha fun call honar
    bp -> gun();        //Base cha gun call honar
    bp -> sun();        //Base cha sun call honar
    //bp -> run();        //Error karan bp ha pointer Base cha ahe ani Base madhe run navachi method nahi 

    return 0;
}