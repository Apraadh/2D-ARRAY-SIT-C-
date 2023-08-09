#include <iostream>
using namespace std;

int main(void)
{
    int arr[5] = {5,6,7,8,9};
    int *arrptr = &arrptr[0];

    for(int i=0;i<5;i++)
    {
        cout<<&arrptr<<endl;
        arrptr++;
    }


}