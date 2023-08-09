#include <iostream>
#include <bitset>
using namespace std;
int main(void)
{
    int regVar=(1<<7)|(1<<4);
   //cout<<"Enter regular variable: ";
    //cin>>regVar;
    //cout<<"Enter regular variable: ";
    //cin>>shiftVar;
    //cout<<"The output of the shift function is: "<<(regVar<<shiftVar)<<endl;
    cout<<"The Binary Operation output is:  "<<bitset<16>(regVar)<<endl;
    regVar |= (1<<2);
    cout<<"The second binary operation output is:  "<<bitset<16>(regVar)<<endl;
    regVar |= (0<<7);
    cout<<"The third binary operation output is:  "<<bitset<16>(regVar)<<endl;
}