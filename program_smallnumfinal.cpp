#include<iostream>
using namespace std; 
int main(void)
{
    int arr1[10];

    for(int i = 0; i<10; i++)
    {
        cout<<"Enter Value: "<<i+1<<"."<<endl;
        cin>>arr1[i];

    }
    int largest=arr1[0];
    int smallest=arr1[0];

    for(int i=0;i<10;i++)
    {   
        if(arr1[i]>largest)
        {
            largest=arr1[i];
        }
        if(arr1[i]<smallest)
        {
            smallest=arr1[i];
        }

        cout<<"Largest Number is:"<<largest<<endl;
        cout<<"Smallest Number is: "<<smallest<<endl;
    }
}