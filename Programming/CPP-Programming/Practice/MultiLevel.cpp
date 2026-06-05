#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"Inside Base constructor\n";
            i = 0;
            j = 0;
        }

        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }

        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived : public Base
{
    public:
        int x;
        Derived()
        {
           cout<<"Inside Derived Constructor\n";
           x = 0; 
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }

        void Gun()
        {
            cout<<"Inside Gun of Derived\n";
        }
};

class DerivedX : public Derived
{
    public:
        int y;

        DerivedX()
        {
            cout<<"Inside DerivedX Contsructor\n";
            y = 0;
        }

        ~DerivedX()
        {
            cout<<"Inside DerivedX destructor\n";
        }

        void Sun()
        {
            cout<<"Inside DerivedX sun\n";
        }
};

int main()
{
    cout<<"Inside main\n";

    DerivedX dobj;        // Storage class auto

    cout<<"Size of Base class object is : "<<sizeof(Base)<<"\n";  // 8 byte
    cout<<"Size of derived class object is : "<<sizeof(Derived)<<"\n"; // 12 byte
    cout<<"Size of DerivedX class object is : "<<sizeof(DerivedX)<<"\n";  // 16 byte

    cout<<dobj.i<<"\n";     //0
    cout<<dobj.j<<"\n";     //0
    cout<<dobj.x<<"\n";     //0
    cout<<dobj.y<<"\n";

    dobj.Fun();
    dobj.Gun();
    dobj.Sun();

    cout<<"End of Main\n";

    return 0;
}