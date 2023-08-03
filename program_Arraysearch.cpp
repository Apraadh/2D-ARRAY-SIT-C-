#include<iostream>
using namespace std;

int main(void)
{
    int a[100],n,i,x;
    cout<<"Enter The Limit: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter The Value : ";
        cin>>a[i];
    }
    cout<<"Enter The Value to Search :";
    cin>>x;
 
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<"Value Found at : "<<i;
            return 0;
        }
    }
    cout<<"Value Not Found";
    return 0;
}
 