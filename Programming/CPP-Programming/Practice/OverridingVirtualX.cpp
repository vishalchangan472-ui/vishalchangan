#include <iostream>
using namespace std;

class Base
{
    public :
        int i, j;               //8 byte

        void fun()                          //1000 address
        { cout<<"Inside Base fun\n"; }

        virtual void gun()                  // 2000
        { cout<<"Inside Base gun\n"; }

        virtual void sun()                     //3000
        { cout<<"Inside Base sun\n"; }
};      

class Derived : public Base     //16 bytes

{
    public:
    int x, y;

    void fun()                                  //4000
             
    { cout<<"Inside Derived fun\n"; }           

    void sun()                                  //5000
        { cout<<"Inside Derived sun\n"; }       

    virtual void run()                          //6000
        { cout<<"inside Derived run\n"; }          
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