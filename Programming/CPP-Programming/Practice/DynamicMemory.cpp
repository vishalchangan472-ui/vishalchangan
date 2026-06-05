#include<iostream>
using namespace std;

int main()
{
    int size =0;
    float *Marks = NULL;
    int i = 0;

    cout<<"Enter number of element\n";
    cin>>size;


    //Dynamic memory
    Marks = new float(size);

   // float Marks[5];

   

   cout<<"enter your marks\n";

   for (i = 0; i< size; i++)
   {
     cin>>Marks[i];
   }

   cout<<"Entered marked are : \n";

   for (i = 0; i< size; i++)
   {
      cout<<Marks[i]<<"\n";
   }

   delete []Marks;

   return 0;
}
