#include <iostream>
using namespace std;


int main()
{
    int no = 11;
    int &x = no;    // x is topan nav ahe 

    cout <<"Value of no :" <<no<<"\n";      //11
    cout <<"Value of x :" <<x<<"\n";        //11

    cout <<"Address of no :" <<&no<<"\n";   //100
    cout <<"Address of x :" <<&x<<"\n";     //100

    cout<<"size of no : "<<sizeof(no)<<"\n";    //4
    cout<<"size of x : "<<sizeof(x)<<"\n";      //4

    return 0;
}