#include<iostream>
using namespace std;

// ENCAPSULATION
class Marvellous
{
    // This will throw error, Access specifier bydefault private
    int No1, No2;   //Characteristics

    void fun()      //Behaviour
    {
        cout<<"Inside fun\n";
    }

    void gun()      //Behaviour
    {
        cout<<"Inside gun\n";   
    }
};

int main()
{

    // Object creation (instance)
    Marvellous mobj1;
    Marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";  //8 byte

    cout<<mobj1.No1<<"\n";  //Error

    mobj1.fun();            //Error
    mobj2.fun();            //Error

    mobj1.gun();            //Error
    


    return 0;
}