#include<iostream>
using namespace std;
int main(void)
{
int arr[10];
for(int i=0; i<10; i++)
{
    cout<<"Enter number: "<<i+1<<".";
    cin>>arr[i];
}
for(int i = 0; i<10; i++)
{
    cout<<arr[i]<<endl;
}
}