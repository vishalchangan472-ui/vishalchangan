#include<iostream>
using namespace std;

// ENCAPSULATION
class Marvellous
{
    // Access specifier
    public:
    int No1, No2;   //Characteristics

    // Default Constructor
    Marvellous()
    {
        cout<<"Inside default constructor\n";
        No1 = 0;
        No2 = 0;
    }

    // Parameterized Constructor
    Marvellous(int a, int b)
    {
        cout<<"Inside parameterized constructor\n";
        No1 = a;
        No2 = b;
    }

    // Copy Constructor
    Marvellous(Marvellous &ref)
    {
        cout<<"Inside Copy constructor\n";
        No1 = ref.No1;
        No2 = ref.No2;
    }

    // Destructor
    ~Marvellous()
    {
        cout<<"Inside Destructor\n";
    }
    
};

int main()
{
    cout<<"Inside main\n";
    Marvellous mobj1();         //For Default constructor
    Marvellous mobj2(11,21);    //For Parameterized Constructor
    Marvellous mobj3(mobj2);    //For Copy Constructor

    cout<<"End of main\n";
    return 0;
}   // All destructors gets called