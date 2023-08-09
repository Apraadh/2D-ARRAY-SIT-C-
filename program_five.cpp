#include <iostream>
using namespace std;
int main(void)
{
    int regVar,shiftVar;
    cout<<"Enter regular variable: ";
    cin>>regVar;
    cout<<"Enter regular variable: ";
    cin>>shiftVar;
    cout<<"The output of the shift function is: "<<(regVar<<shiftVar)<<endl;
}