#include <iostream>
using namespace std;
int main(void)
{
    double farr[5]={3,5,6,7,8};
    double *farrptr = &farr[0];
    for(int i =0; i<5; i++)
    {
        cout<<*farrptr<<"\t"<<endl;
        cout<<farrptr<<endl;
        farrptr++;

    }
}