#include<iostream>
using namespace std;
int main(void)
{
    int n, output;
    cout<<"Enter any integer: "<<endl;
    cin>>n;
    
    int i = 1;

    do {
  output = n* i;
  i++;
  cout<<output<<endl;
}
while (i<10);
}