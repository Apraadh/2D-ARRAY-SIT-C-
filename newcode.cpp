#include <iostream>
using namespace std;
main()
{
	int a,b,c,d;
	cout<<"Enter a: "<<endl;
	cin>>a;
	cout<<"Enter b: "<<endl;
	cin>>b;
	c = a/b;
	cout<<c;
	
	if (b == 0)
	{
		d = c+1;
		cout<<d<<endl;
	}
	else
	{
		cout<<"N/A"<<endl;
	}
}
