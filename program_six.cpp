#include <iostream>
using namespace std;
int main(void)
{
    int myVar;
    cout<<"Enter marks: "<<endl;
    cin>>myVar;

    if (myVar >= 90)
    {
        cout<<"O"<<endl;

    }
    else if (myVar>=80)
    {
        cout<<"A+"<<endl;
    }
    else if(myVar>=70 )
    {
        cout<<"A"<<endl;
    }
    else if(myVar>=60 )
    {
        cout<<"B+"<<endl;
    }
    else if(myVar>=50 )
    {
        cout<<"B"<<endl;
    }
    else if(myVar >=40 )
    {
        cout<<"C"<<endl;
    }
    else if(myVar<40)
    {
        cout<<"Fail"<<endl;
    }
   else{
    cout<<"Wrong Input"<<endl;
   }
}